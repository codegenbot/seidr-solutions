#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool is_same(vector<string> a, vector<string> b){
    if(a[0] == b[0] && a[1] == b[1]){
        return true;
    }
    return false;
}

vector<string> reverse_delete(string s, string c) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            result += s[i];
        }
    }
    string reverse_result = result;
    reverse(reverse_result.begin(), reverse_result.end());
    bool is_palindrome = (result == reverse_result);
    return {result, (is_palindrome ? "True" : "False")};
}

int main() {
    assert(is_same(reverse_delete("mamma", "mia") , {"", "True"}));
    assert(is_same(reverse_delete("hello", "o") , {"hell", "True"}));
    return 0;
}