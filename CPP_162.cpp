#include <string>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char* data = (unsigned char*)text.c_str();
    string result;
    for (int i = 0; i < text.size(); ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", data[i]);
        result += buffer;
    }

    return result;
}