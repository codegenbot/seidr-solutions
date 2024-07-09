#include<string>
#include<openssl/md5.h>
#include<iomanip>
#include<sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char md5[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, (const unsigned char*)text.c_str(), text.size());
    MD5_Final(md5,&ctx);

    string result;
    for(int i = 0; i < 16; ++i){
        std::ostringstream ss;
        ss << hex << setw(2) << setfill('0') << (int)md5[i];
        result += ss.str();
    }
    
    return result;
}