#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(string s, string c) {
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            result += s[i];
        }
    }
    string reversed = result;
    reverse(reversed.begin(), reversed.end());
    bool isPalindrome = (result == reversed);
    return vector<string>{result, isPalindrome ? "True" : "False"};
}

bool issame(vector<string> a, vector<string> b) {
	// Implement the logic to check if the two vectors are the same
	// and return true or false accordingly.
    return a == b;
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));

    return 0;
}