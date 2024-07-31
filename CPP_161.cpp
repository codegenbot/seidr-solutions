```cpp
#include <iostream>
#include <string>

using namespace std;

std::string solve(std::string s);

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "Result: " << solve(s) << endl;
}

std::string solve(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }
    return result.empty() ? string(s).substr(0, result.size()) : result;
}