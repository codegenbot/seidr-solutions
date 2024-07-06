#include <string>
#include <digest.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char result[MD5_DIGEST_LENGTH];
    MD5(text.c_str(), text.length(), result);
    
    ostringstream oss;
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        oss << setfill('0') << setw(2) << hex << (int)result[i];
    }
    
    return oss.str();
}