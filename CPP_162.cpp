#include <openssl/ssl.h>
#include <string>

int main() {
    string text;
    cout << "Enter your input: ";
    cin >> text;
    
    string result = string_to_md5(text);
    cout << "The MD5 of the entered string is: " << result << endl;
    
    return 0;
}
```