#include <string>
using namespace std;

bool is_palindrome(string str) {
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str) {
    int i = 0, j = str.size() - 1;
    while (i <= j && str[i] == str[j]) {
        i++;
        j--;
    }
    string palindrome;
    for (int k = j; k >= i; k--) {
        palindrome += str[k];
    }
    for (int k = 0; k < i; k++) {
        palindrome += str[k];
    }
    return palindrome + string(1, str[0]);
}