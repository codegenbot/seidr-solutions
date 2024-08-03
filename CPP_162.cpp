#include <string>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    MD5_CTX md5;
    unsigned char result[16];
    MD5_Init(&md5);
    MD5_Update(&md5, text.c_str(), text.size());
    MD5_Final(result, &md5);
    
    stringstream ss;
    for (int i = 0; i < 16; i++) {
        ss << hex << setfill('0') << fixed << setw(2) << (int)result[i];
    }
    
    return ss.str();
}