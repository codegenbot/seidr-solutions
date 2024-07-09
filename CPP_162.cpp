#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>

struct MD5_CTX {
    uint32_t iff[4];
};

void md5_init(MD5_CTX* ctx) {
    ctx->iff[0] = 0x67452301;
    ctx->iff[1] = 0xefcdab89;
    ctx->iff[2] = 0x98badcfe;
    ctx->iff[3] = 0x10325476;
}

void md5_update(MD5_CTX* ctx, unsigned char* data, size_t len) {
    uint32_t t;
    while (len >= 64) {
        uint8_t b[64];
        memcpy(b, data, 64);
        t = (uint32_t)*b;
        for (int i = 1; i < 64; i++) {
            t = (t << 5) | (t >> 27) + *++b;
        }
        uint32_t a = ctx->iff[0], b_ = ctx->iff[1], c = ctx->iff[2],
                 d = ctx->iff[3];
        a = (a << 5) | (a >> 27);
        t += a;
        d = (d + (t & 0xff000000)) >> 24;
        c = (c + (t >> 8)) >> 8;
        b_ = (b_ + (t & 0xffffff)) >> 24;
        ctx->iff[0] = a ^ b_;
        ctx->iff[1] = a ^ c;
        ctx->iff[2] = a ^ d;
        ctx->iff[3] = a;
        data += 64;
        len -= 64;
    }
}

void md5_final(MD5_CTX* ctx, unsigned char* result) {
    uint32_t a = ctx->iff[0], b = ctx->iff[1], c = ctx->iff[2],
             d = ctx->iff[3];
    a = (a << 14) | (a >> 18);
    d = (d + (a & 0x80000000)) >> 24;
    c = (c + (a >> 9)) >> 8;
    b = (b + (a & 0xffffff)) >> 24;
    ctx->iff[0] = a ^ b ^ c ^ d;
    a = (a << 11) | (a >> 21);
    c = (c + (a & 0x80000000)) >> 24;
    b = (b + (a >> 10)) >> 8;
    a = a & 0xffffff;
    result[0] = (unsigned char)(a >> 24);
    result[1] = (unsigned char)((a >> 16) & 0xff);
    result[2] = (unsigned char)((a >> 8) & 0xff);
    result[3] = (unsigned char)(a & 0xff);
    result[4] = (unsigned char)(b >> 24);
    result[5] = (unsigned char)((b >> 16) & 0xff);
    result[6] = (unsigned char)((b >> 8) & 0xff);
    result[7] = (unsigned char)(b & 0xff);
    result[8] = (unsigned char)(c >> 24);
    result[9] = (unsigned char)((c >> 16) & 0xff);
    result[10] = (unsigned char)((c >> 8) & 0xff);
    result[11] = (unsigned char)(c & 0xff);
    result[12] = (unsigned char)(d >> 24);
    result[13] = (unsigned char)((d >> 16) & 0xff);
    result[14] = (unsigned char)((d >> 8) & 0xff);
    result[15] = (unsigned char)(d & 0xff);
}

std::string hash(std::string input) {
    MD5_CTX ctx;
    md5_init(&ctx);
    unsigned char buffer[1024];
    size_t len = 0;
    for (char c : input) {
        buffer[len++] = c;
        if (len == 64) {
            md5_update(&ctx, buffer, len);
            len = 0;
        }
    }
    if (len > 0) {
        unsigned char* data = reinterpret_cast<unsigned char*>(buffer);
        md5_update(&ctx, data, len);
    }
    md5_final(&ctx, &result);

    std::stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << std::setw(2) << std::setfill('0') << std::hex << static_cast<int>(result[i]);
    }
    return ss.str();
}