#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char hash[16];
    unsigned int hash_len = 0;
    MD5((const unsigned char*)text.c_str(), text.size(), hash);

    stringstream ss;
    for (int i = 0; i < 16; i++) {
        ss << hex << setfill('0') << setw(2) << (int)hash[i];
    }

    return ss.str();
}