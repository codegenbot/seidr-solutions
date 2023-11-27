#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> reverse_delete(string s, string c);
bool issame(vector<string> a, vector<string> b);

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
    // ...
}

int main() {
    // Uncomment the following line once you have implemented the issame function
    // assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));

    // Rest of the code...

    return 0;
}