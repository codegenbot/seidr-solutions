#include <vector>
#include <set>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return (a == b);
}

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    set<char> c_set(c.begin(), c.end());
    
    string temp = "";
    
    for (char ch : s) {
        if (!c_set.count(ch)) {
            temp += ch;
        }
    }
    
    bool is_palindrome = false;
    string rev_temp = temp;
    reverse(rev_temp.begin(), rev_rev_temp.end());
    is_palindrome = (temp == rev_temp);
    
    result.push_back(temp);
    result.push_back((is_palindrome ? "True" : "False"));
    
    return result;

int main() {
    assert(issame(reverse_delete("mamma", "mia") , {"", "True"}));
    return 0;
}