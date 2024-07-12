#include <iostream>
#include <string>

using namespace std;

std::string encrypt(const std::string& s) {
    std::string result = "";
    for (char c : s) {
        if (c == 'a') c = 'e';
        else if (c == 'A') c = 'E';
        result += c;
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    cout << encrypt(input) << endl;
    return 0;
}