#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool isEqual(vector<string> a, vector<string> b) {
    return a == b;
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
    vector<string> output;
    output.push_back(result);
    output.push_back(is_palindrome ? "True" : "False");
    return output;
}

int main() {
    assert(reverse_delete("mamma", "mia") == vector<string>{"", "True"});
    return 0;
}