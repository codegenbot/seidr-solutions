#include <string>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    MD5_CTX md5;
    MD5_Init(&md5);
    const char* ptr = text.c_str();
    size_t len = text.size();
    unsigned char buffer[1024];
    size_t read;

    while (len > 0) {
        if (len >= sizeof(buffer)) {
            read = sizeof(buffer);
        } else {
            read = len;
        }
        MD5_Update(&md5, ptr, read);
        ptr += read;
        len -= read;
    }

    unsigned char result[16];
    MD5_Final(result, &md5);

    stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << hex << setfill('0') << setw(2) << static_cast<int>(result[i]);
    }
    return ss.str();
}