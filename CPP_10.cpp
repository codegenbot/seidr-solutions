#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(string str) {
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str) {
    int i = 0, j = str.length() - 1;
    while (i <= j && str[i] == str[j]) {
        i++;
        j--;
    }
    string prefix = str.substr(0, i);
    string suffix = str.substr(j + 1);
    return str + reverse(suffix) + prefix + reverse(prefix);
}

int main() {
    cout << make_palindrome("") << endl;
    cout << make_palindrome("cat") << endl;
    cout << make_palindrome("cata") << endl;
    return 0;
}