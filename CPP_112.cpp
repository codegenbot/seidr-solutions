#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string res = "";
    
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            res += s[i];
        }
    }
    
    string rev = res;
    reverse(rev.begin(), rev.end());
    
    if (rev == res) {
        result.push_back(res);
        result.push_back("True");
    } else {
        result.push_back(res);
        result.push_back("False");
    }
    
    return result;
}

int main() {
    assert(reverse_delete("mamma", "mia") == vector<string>{"", "True"});
    
    return 0;
}