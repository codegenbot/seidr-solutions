#include <iomanip>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char result[MD5_DIGEST_LENGTH];
    MD5_CTX md5;
    MD5_Init(&md5);
    const char* ptr = text.c_str();
    while (*ptr) {
        MD5_Update(&md5, ptr, 1);
        ptr++;
    }
    MD5_Final(result, &md5);

    string str;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        stringstream ss;
        ss << std::hex << std::setfill('0') << std::setw(2) << (int)result[i];
        str += ss.str();
    }
    return str;
}