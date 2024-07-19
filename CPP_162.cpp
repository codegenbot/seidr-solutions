#include <iostream>
#include <string>
#include <cassert>

#define LEFTROTATE(x, c) (((x) << (c)) | ((x) >> (32 - (c)))

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    const uint32_t k[] = {
        0xd76aa478, 0xe8c7b756, 0x242070db, 0xc1bdceee,
        0xf57c0faf, 0x4787c62a, 0xa8304613, 0xfd469501,
        0x698098d8, 0x8b44f7af, 0xffff5bb1, 0x895cd7be,
        0x6b901122, 0xfd987193, 0xa679438e, 0x49b40821,
        0xf61e2562, 0xc040b340, 0x265e5a51, 0xe9b6c7aa,
        0xd62f105d, 0x02441453, 0xd8a1e681, 0xe7d3fbc8,
        0x21e1cde6, 0xc33707d6, 0xf4d50d87, 0x455a14ed,
        0xa9e3e905, 0xfcefa3f8, 0x676f02d9, 0x8d2a4c8a,
        0xfffa3942, 0x8771f681, 0x6d9d6122, 0xfde5380c,
        0xa4beea44, 0x4bdecfa9, 0xf6bb4b60, 0xbebfbc70,
        0x289b7ec6, 0xeaa127fa, 0xd4ef3085, 0x04881d05,
        0xd9d4d039, 0xe6db99e5, 0x1fa27cf8, 0xc4ac5665,
        0xf4292244, 0x432aff97, 0xab9423a7, 0xfc93a039,
        0x655b59c3, 0x8f0ccc92, 0xffeff47d, 0x85845dd1,
        0x6fa87e4f, 0xfe2ce6e0, 0xa3014314, 0x4e0811a1,
        0xf7537e82, 0xbd3af235, 0x2ad7d2bb, 0xeb86d391
    };

    const size_t text_length = text.length();
    uint32_t a0 = 0x67452301, b0 = 0xefcdab89, c0 = 0x98badcfe, d0 = 0x10325476;
    uint32_t* padding_ptr;

    uint8_t* data = new uint8_t[text_length + 64];
    std::copy(text.begin(), text.end(), data);
    data[text_length] = 0x80;
    padding_ptr = (uint32_t*)(data + text_length + 1);
    *padding_ptr = text_length * 8;

    uint32_t A = a0, B = b0, C = c0, D = d0;

    for (size_t i = 0; i < text_length + 9; i += 64) {
        uint32_t M[16];
        std::copy(&data[i], &data[i] + 64, (uint8_t*)M);

        uint32_t AA = A, BB = B, CC = C, DD = D;

        for (size_t j = 0; j < 64; ++j) {
            uint32_t F, g;
            if (j < 16) {
                F = (B & C) | ((~B) & D);
                g = j;
            } else if (j < 32){
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
            B = B + LEFTROTATE(F, 32);
        }

        A += AA;
        B += BB;
        C += CC;
        D += DD;
    }

    delete[] data;

    char mdString[33];
    sprintf(mdString, "%08x%08x%08x%08x", A, B, C, D);

    return std::string(mdString);
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");

    return 0;
}