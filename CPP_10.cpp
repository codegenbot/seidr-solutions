#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string make_palindrome(string str);

int main() {
    assert(make_palindrome("jerry") == "jerryrrej");
}

string make_palindrome(string str){
    string prefix = "";
    for (int i = str.length() - 1; i >= 0; --i) {
        if (str.substr(0, i) == str.substr(str.length() - i)) {
            prefix = str.substr(i);
            break;
        }
    }
    return str + prefix;
}