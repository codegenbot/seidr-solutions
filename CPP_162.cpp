#include <string>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX md5ctx;
    unsigned char md5digest[16];
    MD5_Init(&md5ctx);
    stringstream ss(text);
    char buffer[256];
    while (getline(ss, buffer, '\0')) { 
        MD5_Update(&md5ctx, buffer, strlen(buffer));
    }
    MD5_Final(md5digest, &md5ctx);

    ostringstream oss;
    for (int i = 0; i < 16; ++i) {
        oss << setfill('0') << setw(2) << hex << (int)md5digest[i];
    }

    return oss.str();
}