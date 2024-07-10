```cpp
#include <string>
#include <iostream>

using namespace std;

std::string solve(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            result += (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
        } else {
            result += c;
        }
    }
    return result.empty() ? string(s.rbegin(), s.rend()) : result;
}

int main() {
    std::cout << "Enter a string: ";
    std::string s;
    std::cin >> s;  
    std::cout << solve(s) << std::endl;  
    return 0;
}