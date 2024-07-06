#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <md5.h>

using namespace std;

MD5_CTX* ctx = NULL;
unsigned char md[16];

void MD5_Init(MD5_CTX* context) {
    context->tv_sec = 0;
    context->tv_usec = 0;
}

void MD5_Update(MD5_CTX* context, const unsigned char *buf, int n) {
    md5_transform((MD5_STATE*)context->internal_buffer, context->bytes, buf, n);
    context->bytes += n;
}

void MD5_Final(unsigned char* result, MD5_CTX* context) {
    unsigned char pad[64];
    int pad_len = (context->bytes + 55u)>>3;
    int left_over = context->bytes & 63;

    memset(pad + left_over, 0x80, 64 - left_over);
    memcpy(pad, &(context->internal_buffer[8]), left_over);

    MD5_Update(context, pad, pad_len);
    if (left_over > 55) {
        MD5_Update(context, NULL, 1);
    }
    context->bytes = 0;

    memcpy(result, context->internal_buffer, 16);
}

string string_to_md5(string text) {
    if (text.empty()) return "";

    ctx = new MD5_CTX;
    MD5_Init(ctx);
    unsigned char* data = reinterpret_cast<unsigned char*>(text.c_str());
    int len = text.length();
    MD5_Update(ctx, data, len);
    delete[] ctx->internal_buffer;
    MD5_Final(md, ctx);

    string result;
    for (int i = 0; i < 16; ++i) {
        ostringstream oss;
        oss << setfill('0') << setw(2) << hex << static_cast<int>(md[i]);
        result += oss.str();
    }
    delete ctx;
    return result;
}