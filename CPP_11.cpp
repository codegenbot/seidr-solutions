#include <string>
using namespace std;

string string_xor(string a, string b) {
    string result = "";
    for (int i = 0; i < a.length(); i++) {
        if ((a[i] - '0') ^ (b[i] - '0')) {
            result += '1';
        } else {
            result += '0';
        }
    }
    return result;
}

int main() {
    string a, b;
    cout << "Enter the first string: ";
    cin >> a;
    cout << "Enter the second string: ";
    cin >> b;
    string output = string_xor(a, b);
    cout << "The XOR of the two strings is: " << output << endl;
    return 0;
}