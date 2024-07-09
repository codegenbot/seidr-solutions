#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    for (int i = 0; i < s.length(); i++) {
        bool found = false;
        for (int j = 0; j < c.length(); j++) {
            if (s[i] == c[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            temp += s[i];
        }
    }
    result.push_back(temp);
    
    if (isPalindrome(temp)) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    return result;
}

bool isPalindrome(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}