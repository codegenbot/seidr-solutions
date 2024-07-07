```cpp
#include <algorithm>
#include <iomanip>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX md5;
    unsigned char md5sum[16];
    const unsigned char *p = reinterpret_cast<const unsigned char*>(text.c_str());
    size_t len = text.size();
    unsigned int numBytes = len + 1; // Include null terminator

    // Initialize the context
    MD5_Init(&md5);

    // Update the context with the string
    MD5_Update(&md5, &p[0], numBytes);

    // Finalize the context
    MD5_Final(&md5, md5sum);

    ostringstream oss;
    for (int i = 0; i < 16; ++i) {
        oss << setfill('0') << setw(2) << hex << static_cast<int>(md5sum[i]);
    }

    return oss.str();
}