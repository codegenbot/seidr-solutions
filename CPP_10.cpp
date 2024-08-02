#include <algorithm>
using namespace std;

string make_palindrome(string str) {
    string rev = str;
    reverse(rev.begin(), rev.end());
    size_t pos = 0;
    while (pos < str.length() && str[pos] == rev[rev.size()-1-pos]) {
        pos++;
    }
    return str.substr(0, pos) + rev.substr(rev.size()-pos);
}