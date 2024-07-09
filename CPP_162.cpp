#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";

    unsigned char result[16];
    MD5((const unsigned char*)text.c_str(), text.size(), result);

    std::string output;
    for(int i = 0; i < 16; i++) {
        stringstream ss;
        ss << setfill('0') << setw(2) << hex << (int)result[i];
        output += ss.str();
    }

    return output;
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}