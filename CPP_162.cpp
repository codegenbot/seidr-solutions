```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

void MD5(string input, unsigned char md5[]) {
    // Define your MD5 hash generation logic here...
    const int BUFFER_SIZE = 64;
    const int DIGEST_LENGTH = 16;
    unsigned char buffer[BUFFER_SIZE];
    unsigned long long* pWord = (unsigned long long*) &buffer[0];
    unsigned long long* pBytes = (unsigned long long*) &buffer[8];
    unsigned char digest[DIGEST_LENGTH];

    // Initialize MD5 context
    unsigned int a = 0x67452301;
    unsigned int b = 0xefcdab89;
    unsigned int c = 0x098f2abc;
    unsigned int d = 0x1db71064;

    for (int i = 0; i < input.length(); i += BUFFER_SIZE) {
        int left = min((int)input.length() - i, BUFFER_SIZE);
        memcpy(buffer, &input[i], left);

        // Pad the message to be a multiple of the block size
        buffer[left] = 0x80;
        left++;
        while (left < BUFFER_SIZE)
            buffer[left++] = 0;

        unsigned int length = ((unsigned long)input.length() * 8);
        memcpy(&buffer[48], &length, 4);

        // Process the message block
        for (int i = 0; i < (BUFFER_SIZE / 4); i++) {
            pWord[i] = (pBytes[i] >> 3) | ((pBytes[i] & 0x07) << 29);
            pBytes[i] = pWord[i];
        }

        pWord[14] = a;
        pWord[15] = b;
        pWord[16] = c;
        pWord[17] = d;

        // Update the digest
        for (int i = 0; i < BUFFER_SIZE / 4; i++) {
            unsigned long long w = pBytes[i];
            a = ((a & 0xf0000000) >> 24) + (((b & 0xe0000000) >> 25) | (c & 0x10000000)) + d;
            d = c;
            c = b;
            b = a;
            a = ((a & 0x0f000000) << 4) | ((w & 0x00fffc00) >> 3);
            d += (unsigned int)((a & 0xffe00000) >> 21);
            c += (unsigned int)((a & 0x00140000) >> 16);
            b += a;

            w = pBytes[i + 1];
            a = ((a & 0xf0000000) >> 24) + (((b & 0xe0000000) >> 25) | (c & 0x10000000)) + d;
            d = c;
            c = b;
            b = a;
            a = ((a & 0x0f000000) << 4) | ((w & 0x00fffc00) >> 3);
            d += (unsigned int)((a & 0xffe00000) >> 21);
            c += (unsigned int)((a & 0x00140000) >> 16);
            b += a;

            w = pBytes[i + 2];
            a = ((a & 0xf0000000) >> 24) + (((b & 0xe0000000) >> 25) | (c & 0x10000000)) + d;
            d = c;
            c = b;
            b = a;
            a = ((a & 0x0f000000) << 4) | ((w & 0x00fffc00) >> 3);
            d += (unsigned int)((a & 0xffe00000) >> 21);
            c += (unsigned int)((a & 0x00140000) >> 16);
            b += a;

            w = pWords[i];
            a = ((a & 0xf0000000) >> 24) + (((b & 0xe0000000) >> 25) | (c & 0x10000000)) + d;
            d = c;
            c = b;
            b = a;
            a = ((a & 0x0f000000) << 4) | ((w & 0x00fffc00) >> 3);
            d += (unsigned int)((a & 0xffe00000) >> 21);
            c += (unsigned int)((a & 0x00140000) >> 16);
            b += a;
        }

        for (int i = 0; i < DIGEST_LENGTH; i++) {
            md5[i] = (unsigned char)(d >> (i * 8));
            d <<= 8;
        }
    }

    // Finish the digest
    md5[DIGEST_LENGTH - 4] = (unsigned char)((a & 0xff000000) >> 24);
    md5[DIGEST_LENGTH - 3] = (unsigned char)((a & 0x00ff0000) >> 16);
    md5[DIGEST_LENGTH - 2] = (unsigned char)(a & 0xffff);
    md5[DIGEST_LENGTH - 1] = 0;

    md5[DIGEST_LENGTH - 4] = (unsigned char)((b & 0xff000000) >> 24);
    md5[DIGEST_LENGTH - 3] = (unsigned char)((b & 0x00ff0000) >> 16);
    md5[DIGEST_LENGTH - 2] = (unsigned char)(b & 0xffff);
    md5[DIGEST_LENGTH - 1] = 0;

    md5[DIGEST_LENGTH - 4] = (unsigned char)((c & 0xff000000) >> 24);
    md5[DIGEST_LENGTH - 3] = (unsigned char)((c & 0x00ff0000) >> 16);
    md5[DIGEST_LENGTH - 2] = (unsigned char)(c & 0xffff);
    md5[DIGEST_LENGTH - 1] = 0;

    md5[DIGEST_LENGTH - 4] = (unsigned char)((d & 0xff000000) >> 24);
    md5[DIGEST_LENGTH - 3] = (unsigned char)((d & 0x00ff0000) >> 16);
    md5[DIGEST_LENGTH - 2] = (unsigned char)(d & 0xffff);
    md5[DIGEST_LENGTH - 1] = 0;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    // Convert the input to uppercase
    for (auto& c : input) {
        if (c >= 'a' && c <= 'z') {
            c += ('A' - 'a');
        }
    }

    // Compute the MD5 hash of the input string
    computeMD5(input.c_str());

    return 0;
}