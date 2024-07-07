#include <string>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";

    MD5_CTX md5ctx;
    unsigned char md5sum[16];
    stringstream ss;
    stringstream os;
    MD5_Init(&md5ctx);

    int i = 0;
    while(i < text.size()) {
        string str(text.substr(i, 64));
        if(str.empty()) break;
        MD5_Update(&md5ctx, str.c_str(), str.size());
        i += 64;
    }
    if(i < text.size()){
        string str(text.substr(i));
        MD5_Update(&md5ctx, str.c_str(), str.size());
    }

    MD5_Final(md5sum, &md5ctx);

    for (int i = 0; i < 16; i++) {
        char buffer[3];
        sprintf(buffer, "%02x", md5sum[i]);
        os << buffer;
    }
    
    return os.str();
}