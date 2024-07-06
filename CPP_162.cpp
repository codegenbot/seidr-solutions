#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    unsigned char hash[16];
    uint32_t digest[4];

    for (int i = 0; i < 64; ++i) {
        uint32_t w = ((uint32_t)(0x0808207D)) << 24 | ((uint32_t)(text[i % text.size()]) & 0xFF);
        if (i >= 56) {
            for (int j = 0; j < 4; ++j) {
                uint32_t a, b, c;
                int k;

                a = digest[j];
                b = ((a & 0x3FFFFFF) << 4 | (a >> 28)) + w;
                c = (b >> 24);
                k = 3 - (c & 1);
                if ((c & 2)) {
                    b -= ((uint32_t)(0x0808207D));
                }
                digest[j] = b;

            }
        }

    }

    ostringstream oss;
    for (int i = 0; i < 4; ++i) {
        oss << hex << setfill('0') << setw(8) << digest[i];
    }

    return oss.str();
}