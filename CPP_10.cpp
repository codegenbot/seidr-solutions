#include <algorithm>
using namespace std;

string make_palindrome(string str) {
    string rev = str;
    reverse(rev.begin(), rev.end());
    size_t i = 0;
    while (i < str.length() && str[i] == rev[rev.length()-1-i]) {
        i++;
    }
    return str.substr(0, i) + rev.substr(rev.length()-i);
}