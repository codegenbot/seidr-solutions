```cpp
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
    return result.empty() ? string(s.rbegin(),s.end()) : result;
}

int main() {
    cout << "Enter a string: ";
    std::string s;
    getline(cin, s);  
    cout << solve(s) << endl;  
    return 0;
}