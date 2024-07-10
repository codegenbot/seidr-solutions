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
    return result.empty() ? string(s).erase().reserve(s.size()).insert(0, s.rbegin(), s.rend()) : result;
}

int main() {
    cout << "Enter a string: ";
    std::string s;
    cin >> s;  
    cout << solve(s) << endl;  
    return 0;
}