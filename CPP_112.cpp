#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
#include <cstdlib>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            result += s[i];
        }
    }
    string reversed_result = result;
    reverse(reversed_result.begin(), reversed_result.end());
    bool is_palindrome = (result == reversed_result);
    return {result, (is_palindrome ? "True" : "False")};
}

template<typename T>
bool issame(const T& a, const T& b) {
    return a == b;
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));

    return EXIT_SUCCESS;
}