#include <string>
#include <iomanip>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    unsigned char result[16];
    MD5_CTX md5Context;
    MD5Init(&md5Context);
    const char* ptr = text.c_str();
    size_t len = text.length();
    unsigned char buffer[1024];
    size_t bufferLen = 0;

    while (len > 0) {
        if (bufferLen == sizeof(buffer)) {
            MD5Update(&md5Context, buffer, sizeof(buffer));
            bufferLen = 0;
        }
        size_t copyLen = len > sizeof(buffer) - bufferLen ? sizeof(buffer) - bufferLen : len;
        memcpy(buffer + bufferLen, ptr, copyLen);
        ptr += copyLen;
        len -= copyLen;
        bufferLen += copyLen;
    }

    if (bufferLen > 0) {
        MD5Update(&md5Context, buffer, bufferLen);
    }

    MD5Final(result, &md5Context);

    ostringstream oss;
    for (size_t i = 0; i < 16; ++i) {
        oss << setfill('0') << setw(2) << hex << static_cast<int>(result[i]);
    }

    return oss.str();
}