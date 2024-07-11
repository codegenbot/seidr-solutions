#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

void MD5(string input, unsigned char md5[]) {
    const uint8_t* bytes = (const uint8_t*)input.c_str();
    int n = input.length();

    // Define the MD5 hash values for initialization
    uint32_t w[4] = {0x67452301, 0xefcdab89, 0x98badcfe, 0x1dc6ac3d};

    // Break down input into bytes (assuming ASCII encoding)
    vector<uint8_t> inputBytes;
    for(int i=0; i<n; i++) {
        uint8_t b = bytes[i];
        inputBytes.push_back(b);
    }

    int inputLengthBits = n * 8;

    // Pad the input
    uint8_t paddedInput[65];
    uint8_t* p = paddedInput;
    *p++ = 0x80; // Padding starts with a single '1' bit
    for (int i = 64 - inputLengthBits % 64; i > 0; --i) {
        *p++ = 0; // Pad with zeros
    }
    memcpy(p, &inputLengthBits, sizeof(inputLengthBits));

    // Initialize variables for the MD5 algorithm
    uint32_t a = w[0];
    uint32_t b = w[1];
    uint32_t c = w[2];
    uint32_t d = w[3];

    // Process input in 64-byte blocks
    for (int i = 0; i <= n; i++) {
        uint8_t* block = &inputBytes[i * 4]; // Load the next 64 bytes

        uint32_t F = (a & c) | ((~a) & b);
        uint32_t K = 0x5a827999;

        a = d;
        d = c;
        c = b;
        b = a;

        a = (b & c) | ((~b) & d);
        b = (K + a) & 0xffffffff;
        c = (c << 3) | (c >> 5);
        d = (d << 15) | (d >> 17);

        d = (b ^ c ^ d);
        K = 0x6ed9eba1;

        a = d;
        d = c;
        c = b;
        b = a;

        b = (a & d) | ((~a) & (c));
        a = (K + a) & 0xffffffff;
        c = (c << 3) | (c >> 5);
        d = (d << 15) | (d >> 17);

        c = (b ^ c ^ d);
        K = 0xf2fffcf4;

        for(int j = 0; j < 16; ++j){
            block[j] += a;
            block[j] = (block[j] << 8) | ((uint16_t)(block[j + 1]) >> 8);
            block[j] += b;
            block[j] = (block[j] << 8) | ((uint16_t)(block[j + 1]) >> 8);
            block[j] += c;
            block[j] = (block[j] << 8) | ((uint16_t)(block[j + 1]) >> 8);
            block[j] += d;
        }

        // Update the MD5 state
        uint32_t a = (a + F + b + c + d) & 0xffffffff;
        uint32_t b = (b + F + d) & 0xffffffff;
        uint32_t c = (c + F) & 0xffffffff;
        uint32_t d = (d + F) & 0xffffffff;

        // Check if this is the last block
        if (i < n) continue; // Not the last block, go to next one

        // Finalize the MD5 hash by reversing it
        for(int i = 3; i >= 0; --i){
            md5[i * 4] = (w[i] >> 24) & 0xff;
            w[i] <<= 8;
            md5[(i * 4) + 1] = (w[i] >> 24) & 0xff;
            w[i] <<= 8;
            md5[(i * 4) + 2] = (w[i] >> 24) & 0xff;
            w[i] <<= 8;
            md5[(i * 4) + 3] = w[i] & 0xff;
        }
    }

}

int main() {
    string input;
    cout << "Enter a password: ";
    cin >> input;
    
    unsigned char md5[16];
    MD5(input, md5);

    vector<string> result;
    for (int i = 0; i < 16; ++i)
        result.push_back(setw(2) << hex << setfill('0') << ((int)(md5[i])));

    cout << "MD5 Hash: ";
    for(string s : result){
        cout << s;
    }
    return 0;
}