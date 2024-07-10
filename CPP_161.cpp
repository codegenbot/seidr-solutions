#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

std::string solve(std::string s) {
    if (s.empty()) return s;
    
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }
    return !result.empty() ? result : std::string(s.rbegin(), s.end());
}

int main() {
    cout << "Enter a string: ";
    std::string s;
    getline(cin, s);  
    std::cout << solve(s) << std::endl;  
    return 0;
}