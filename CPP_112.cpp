#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    // Remove characters in s that are present in c
    for (char ch : c) {
        s.erase(remove(s.begin(), s.end(), ch), s.end());
    }
    
    // Check if the resultant string is a palindrome
    string reversed_s = s;
    reverse(reversed_s.begin(), reversed_s.end());
    bool is_palindrome = (s == reversed_s);
    
    // Prepare the result vector
    vector<string> result;
    result.push_back(s);
    result.push_back(is_palindrome ? "True" : "False");
    
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"mm", "True"}));
    return 0;
}