#include <string>
#include <openssl/md5.h>

int main() {
    string text = "password";
    std::cout << string_to_md5(text) << std::endl;
    return 0;
}

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char result[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)text.c_str(), text.size(), result);

    string output;
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        stringstream ss;
        ss << setfill('0') << setw(2) << hex << (int)result[i];
        output += ss.str();
    }

    return output;
}