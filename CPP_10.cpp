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
    if (!prefix.empty()) {
        return prefix + str.substr(i) + reverse(suffix).substr(0, suffix.length() - i));
    } else {
        return str + reverse(suffix);
    }
}