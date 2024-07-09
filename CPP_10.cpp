#include <algorithm>
using namespace std;

string make_palindrome(string str) {
    string s = str;
    int i = 0, j = s.size() - 1;
    
    while (i <= j && s[i] == s[j]) {
        i++;
        j--;
    }
    
    string rev = s.substr(i);
    reverse(rev.begin(), rev.end());
    return str + rev;
}