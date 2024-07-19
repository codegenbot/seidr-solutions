#include <iostream>
#include <string>
#include <cassert>

unsigned int LEFTROTATE(unsigned int x, unsigned int c) {
    return (x << c) | (x >> (32 - c));
}

std::string string_to_md5(const std::string& text) {
    const unsigned int s[64] = {
        7, 12, 17, 22,  7, 12, 17, 22,  7, 12, 17, 22,  7, 12, 17, 22,
        5,  9, 14, 20,  5,  9, 14, 20,  5,  9, 14, 20,  5,  9, 14, 20,
        4, 11, 16, 23,  4, 11, 16, 23,  4, 11, 16, 23,  4, 11, 16, 23,
        6, 10, 15, 21,  6, 10, 15, 21,  6, 10, 15, 21,  6, 10, 15, 21
    };

    const unsigned int k[64] = {
        0xd76aa478, 0xe8c7b756, 0x242070db, 0xc1bdceee,
        0xf57c0faf, 0x4787c62a, 0xa8304613, 0xfd469501,
        0x698098d8, 0x8b44f7af, 0xffff5bb1, 0x895cd7be,
        0x6b901122, 0xfd987193, 0xa679438e, 0x49b40821,
        0xf61e2562, 0xc040b340, 0x265e5a51, 0xe9b6c7aa,
        0xd62f105d, 0x2441453,  0xd8a1e681, 0xe7d3fbc8,
        0x21e1cde6, 0xc33707d6, 0xf4d50d87, 0x455a14ed,
        0xa9e3e905, 0xfcefa3f8, 0x676f02d9, 0x8d2a4c8a,
        0xfffa3942, 0x8771f681, 0x6d9d6122, 0xfde5380c,
        0xa4beea44, 0x4bdecfa9, 0xf6bb4b60, 0xbebfbc70,
        0x289b7ec6, 0xeaa127fa, 0xd4ef3085, 0x4881d05,
        0xd9d4d039, 0xe6db99e5, 0x1fa27cf8, 0xc4ac5665,
        0xf4292244, 0x432aff97, 0xab9423a7, 0xfc93a039,
        0x655b59c3, 0x8f0ccc92, 0xffeff47d, 0x85845dd1,
        0x6fa87e4f, 0xfe2ce6e0, 0xa3014314, 0x4e0811a1,
        0xf7537e82, 0xbd3af235, 0x2ad7d2bb, 0xeb86d391
    };

    std::string result = "";
    unsigned int a0 = 0x67452301;
    unsigned int b0 = 0xefcdab89;
    unsigned int c0 = 0x98badcfe;
    unsigned int d0 = 0x10325476;

    uint64_t bitlen = text.length() * 8;
    
    text += 0x80;
    while ((text.size() % 64) != 56) {
        text += 0;
    }

    text += bitlen;
    // Process message in 512-bit chunks
    for (size_t i = 0; i < text.size(); i += 64) {
        unsigned int M[16];
        unsigned int A = a0, B = b0, C = c0, D = d0;

        for (size_t j = 0; j < 16; j++) {
            M[j] = (unsigned int)text[i + j * 4] & 0xff;
            M[j] |= ((unsigned int)text[i + j * 4 + 1] & 0xff) << 8;
            M[j] |= ((unsigned int)text[i + j * 4 + 2] & 0xff) << 16;
            M[j] |= ((unsigned int)text[i + j * 4 + 3] & 0xff) << 24;
        }

        unsigned int F, g;
        for (size_t j = 0; j < 64; j++) {
            if (j < 16) {
                F = (B & C) | ((~B) & D);
                g = j;
            } else if (j < 32) {
                F = (D & B) | ((~D) & C);
                g = (5 * j + 1) % 16;
            } else if (j < 48) {
                F = B ^ C ^ D;
                g = (3 * j + 5) % 16;
            } else {
                F = C ^ (B | (~D));
                g = (7 * j) % 16;
            }

            F = F + A + k[j] + M[g];
            A = D;
            D = C;
            C = B;
            B += LEFTROTATE(F, s[j]);
        }

        a0 += A;
        b0 += B;
        c0 += C;
        d0 += D;
    }

    result += a0;
    result += b0;
    result += c0;
    result += d0;

    return result;
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");

    return 0;
}