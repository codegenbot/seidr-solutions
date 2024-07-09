#include <string>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX ctx;
    unsigned char mdBuffer[16];
    MD5_Init(&ctx);

    stringstream ss(text);
    string temp;
    int len = 0;
    while (getline(ss, temp)) {
        len += strlen(temp.c_str());
    }
    ss.seekp(0);

    while (getline(ss, temp)) {
        unsigned char* buffer = reinterpret_cast<unsigned char*>(temp.c_str());
        MD5_Update(&ctx, buffer, temp.size());
    }

    MD5_Final(mdBuffer, &ctx);

    stringstream mdHash;
    for (int i = 0; i < 16; i++) {
        char temp[3];
        sprintf(temp, "%02x", mdBuffer[i]);
        mdHash << temp;
    }

    return mdHash.str();
}