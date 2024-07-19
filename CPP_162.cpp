#include <iostream>
#include <string>
#include <cassert>

#define LEFTROTATE(x, c) (((x) << (c)) | ((x) >> (32 - (c)))

std::string string_to_md5(const std::string& text) {
    const char padding[64] = {0x80};
    uint64_t total_bits = text.length() * 8;
    const uint32_t k[] = {
        0xd76aa478, 0xe8c7b756, 0x242070db, 0xc1bdceee,
        0xf57c0faf, 0x4787c62a, 0xa8304613, 0xfd469501,
        0x698098d8, 0x8b44f7af, 0xffff5bb1, 0x895cd7be,
        0x6b901122, 0xfd987193, 0xa679438e, 0x49b40821};
    
    std::string result;
    // MD5 initialization
    uint32_t a0 = 0x67452301;   uint32_t b0 = 0xefcdab89;
    uint32_t c0 = 0x98badcfe;   uint32_t d0 = 0x10325476;

    // Process the input in 512-bit blocks
    for (size_t start = 0; start < text.length(); start += 64) {
        uint32_t a = a0, b = b0, c = c0, d = d0;
        uint32_t buffer[16] = {0};
        int i;
        for (i = 0; i < 16; i++) {
            buffer[i] = (text[start + 4 * i])       |
                        (text[start + 4 * i + 1] << 8) |
                        (text[start + 4 * i + 2] << 16)|
                        (text[start + 4 * i + 3] << 24);
        }
        
        uint32_t AA, BB, CC, DD, F, g;
        for (i = 0; i < 64; ++i) {
            if (i < 16) {F = (b & c) | ((~b) & d); g = i;}
            else if (i < 32) {F = (d & b) | ((~d) & c); g = (5*i + 1) % 16;}
            else if (i < 48) {F = b ^ c ^ d; g = (3*i + 5) % 16;}
            else {F = c ^ (b | (~d)); g = (7*i) % 16;}

            uint32_t temp = d;
            d = c;
            c = b;
            b = b + LEFTROTATE((a + F + k[i >> 4] + buffer[g]), 7);
            a = temp;
        }

        a0 += a; b0 += b; c0 += c; d0 += d;
    }

    // Output the MD5 hash
    result += std::to_string(a0).substr(6, 2) + std::to_string(a0).substr(4, 2) + std::to_string(a0).substr(2, 2) + std::to_string(a0).substr(0, 2);
    result += std::to_string(b0).substr(6, 2) + std::to_string(b0).substr(4, 2) + std::to_string(b0).substr(2, 2) + std::to_string(b0).substr(0, 2);
    result += std::to_string(c0).substr(6, 2) + std::to_string(c0).substr(4, 2) + std::to_string(c0).substr(2, 2) + std::to_string(c0).substr(0, 2);
    result += std::to_string(d0).substr(6, 2) + std::to_string(d0).substr(4, 2) + std::to_string(d0).substr(2, 2) + std::to_string(d0).substr(0, 2);
    
    return result;
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");

    return 0;
}