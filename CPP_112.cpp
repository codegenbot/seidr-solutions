#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<char> char_s(s.begin(), s.end());
    for (char& ch : char_s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            s.erase(remove(s.begin(), s.end(), ch), s.end());
        }
    }

    string result = s;
    reverse(result.begin(), result.end());

    vector<string> res;
    res.push_back(result);
    if (result == s) {
        res.push_back("True");
    } else {
        res.push_back("False");
    }
    return res;
}