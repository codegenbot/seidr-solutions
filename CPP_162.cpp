#include <openssl/ssl.h>
#include <openssl/x509v3.h>
#include <sstream>
#include <iomanip>

using namespace std;

std::string string_to_md5(std::string text) {
    if (text.empty()) {
        return "";
    }

    unsigned char result[16];
    MD5((const unsigned char*)text.c_str(), text.size(), result);

    stringstream ss;
    for (int i = 0; i < 16; i++) {
        ss << setfill('0') << setw(2) << hex << (int)result[i];
    }

    return ss.str();
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
}