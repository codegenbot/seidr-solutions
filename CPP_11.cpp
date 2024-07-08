#include <iostream>
#include <string>

string string_xor(string a, string b) {
    string result = "";
    for (int i = 0; i < a.length(); i++) {
        if ((a[i] - '0') ^ (b[i] - '0')) {
            result += "1";
        } else {
            result += "0";
        }
    }
    return result;
}

int main() {
    std::cout << "Enter two strings: ";
    std::string a, b;
    std::cin >> a >> b;
    std::cout << "XOR result: " << string_xor(a, b) << std::endl;
    return 0;
}