#include <string>
#include <vector>
#include <iomanip>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char result[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), result);

    string hashValue;
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        stringstream ss;
        ss << hex << setfill('0') << setw(2) << (int)result[i];
        hashValue += ss.str();
    }
    
    return hashValue;
}