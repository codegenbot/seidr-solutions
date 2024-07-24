#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    MD5_CTX md5ctx;
    unsigned char result[16];
    MD5_Init(&md5ctx);
    MD5_Update(&md5ctx, text.c_str(), text.size());
    MD5_Final(result, &md5ctx);

    stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << setfill(2) << setw(2) << hex << static_cast<int>(result[i]);
    }
    
    return ss.str();
}

int main() {
    string text;
    cout << "Enter a string: ";
    getline(cin, text);
    cout << "MD5 checksum: " << string_to_md5(text) << endl;
    return 0;
}