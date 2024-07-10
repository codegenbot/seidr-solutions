#include <string>
#include <sstream>
#include <openssl/md5.h>

extern "C" {
    #include <openssl/evp.h>
}

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX md5;
    unsigned char buffer[1024];
    stringstream ss(text);
    string chunk;

    while (getline(ss, chunk)) {
        MD5Update(&md5, (const unsigned char*)chunk.c_str(), chunk.size());
    }

    unsigned char result[16];
    MD5Final(result, &md5);

    ostringstream oss;
    for (int i = 0; i < 16; ++i) {
        oss << hex << setfill('0') << fixed << setw(2) << (int)result[i];
    }

    return oss.str();
}