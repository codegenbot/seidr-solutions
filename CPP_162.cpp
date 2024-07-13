#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    stringstream ss;
    MD5_CTX md5context;
    unsigned char buffer[1024];
    uint32_t length = (uint32_t)text.length();
    
    MD5_Init(&md5context);
    for (size_t i = 0; i < text.length(); i += sizeof(buffer)) {
        size_t len = min((size_t)sizeof(buffer), text.length() - i);
        memcpy(buffer, &text[i], len);
        MD5_Update(&md5context, buffer, len);
    }
    
    MD5_Final(buffer, &md5context);
    ss << setfill('0') << setw(32) << hex << std::showbase;
    for (size_t i = 0; i < 16; ++i)
        ss << std::setiosflags(std::ios::right) << setw(2) << static_cast<int>(buffer[i]);
    
    return ss.str();
}

int main() {
    cout << string_to_md5("Hello world") << endl;
    return 0;
}