#include <iostream>
#include <algorithm>

using namespace std;

std::string flip_case(const string& s) {
    string result = "";
    for (char c : s) {
        if (isalpha(c)) {
            c = (c >= 'a' && c <= 'z') ? toupper(c) : tolower(c);
        }
        result += c;
    }
    return result;
}

int main() {
    string s = "These violent delights have violent ends";
    cout << flip_case(s) << endl; 
    return 0;
}