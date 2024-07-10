#include <string>
#include <vector>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    vector<unsigned char> hash;
    MD5_CTX md5ctx;
    unsigned char md5[16];

    MD5_Init(&md5ctx);
    MD5_Update(&md5ctx, text.c_str(), text.size());
    MD5_Final(md5, &md5ctx);

    for (int i = 0; i < 16; i++) {
        stringstream ss;
        ss << hex << setfill('0') << setw(2) << (int)md5[i];
        hash.push_back((unsigned char)ss.str()[0]);
        hash.push_back((unsigned char)ss.str()[1]);
    }

    string result;
    for (auto c : hash) {
        result += (char)c;
    }

    return result;
}