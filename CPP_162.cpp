#include <openssl/md5.h>
#include <string>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.size(), md5);
    
    stringstream ss;
    for(int i = 0 ; i < MD5_DIGEST_LENGTH; i++) {
        ss << hex << setfill('0') << fixed << setw(2) << (int)md5[i];
    }
    
    return ss.str();
}

int main() {
    string text;
    cout << "Enter a string: ";
    cin >> text;
    cout << "MD5 hash of the entered string is: " << string_to_md5(text);
    return 0;
}