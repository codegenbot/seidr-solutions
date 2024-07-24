#include <algorithm>
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
    string palindrome = str.substr(0, i) + str.substr(j+1);
    return str + is_palindrome(palindrome).second;
}