#include <string>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char result[16];
    MD5_CTX md5;
    MD5_Init(&md5);
    const unsigned char *ptr = reinterpret_cast<const unsigned char*>(text.c_str());
    size_t len = text.size();
    MD5_Update(&md5, ptr, len);
    MD5_Final(result, &md5);

    ostringstream oss;
    for (size_t i = 0; i < 16; ++i) {
        oss << setfill('0') << setw(2) << hex << static_cast<int>(result[i]);
    }

    return oss.str();
}