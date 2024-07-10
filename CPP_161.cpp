#include <iostream>
#include <string>

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
    return result.empty() ? std::string(s).reverse() : result;
}

int main(){
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);
    
    cout << solve(input);
    return 0;
}