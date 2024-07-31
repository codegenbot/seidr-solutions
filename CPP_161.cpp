```cpp
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

std::string solve(std::string s);

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "Result: " << solve(s).c_str() << endl;
}

std::string solve(std::string s) {
    std::string result = "";
    for (auto c : s) {
        if (isalpha(c)) {
            result.push_back((c >= 'a' && c <= 'z') ? std::toupper(c) : std::tolower(c));
        } else {
            result.push_back(c);
        }
    }
    return result;
}