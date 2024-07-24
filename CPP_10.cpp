#include <string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str) {
    int i = 0, j = str.length() - 1;
    while (i < j && str[i] == str[j]) {
        i++;
        j--;
    }
    string prefix = str.substr(0, i);
    string suffix = str.substr(i);
    string rev_suffix = suffix;
    reverse(rev_suffix.begin(), rev_suffix.end());
    return prefix + rev_suffix;
}