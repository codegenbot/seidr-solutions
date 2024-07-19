```cpp
#include <string>
using namespace std;

string encrypt(string s) {
    string result = "";
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            char base = 'a';
            int shift = (int)(c - base);
            int newShift = (shift + 3) % 26;
            result += chr((base + newShift));
        } else if (c >= 'A' && c <= 'Z') {
            char base = 'A';
            int shift = (int)(c - base);
            int newShift = (shift + 3) % 26;
            result += chr((base + newShift));
        } else {
            result += c;
        }
    }
    return result;
}

string encryptMain() {
    string s;
    cout << "Enter a message: ";
    cin >> s;
    string encrypted = encrypt(s);
    cout << "Encrypted message: " << encrypted << endl;
    return encrypted;
}
int main() {
    encryptMain();
    return 0;
}