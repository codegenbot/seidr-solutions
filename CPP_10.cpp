#include <algorithm>
using namespace std;

string make_palindrome(string str) {
    string prefix = str;
    string suffix = str;
    
    // reverse the suffix to find the longest palindromic postfix
    reverse(suffix.begin(), suffix.end());
    
    while (!prefix.empty() && !suffix.empty() && prefix.back() == suffix.front()) {
        prefix.pop_back();
        suffix.erase(0, 1);
    }
    
    string result = prefix;
    result += suffix;
    
    return result;
}