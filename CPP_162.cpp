```cpp
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    MD5_CTX md5ctx;
    unsigned char hash[MD5_DIGEST_LENGTH];
    MD5_Init(&md5ctx);
    stringstream ss(text);
    string temp;
    int i = 0;
    while(getline(&ss, temp)) {
        const char *cstr = temp.c_str();
        MD5_Update(&md5ctx, cstr, strlen(cstr));
    }
    MD5_Final(hash,&md5ctx);

    ostringstream oss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        oss << setfill('0') << setw(2) << hex << (int)hash[i];
    }

    return oss.str();
}