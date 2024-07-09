#include <openssl/ssl.h>
#include <string>

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    
    string result = string_to_md5(str);
    cout << "MD5 of the input string: " << result << endl;

    return 0;
}