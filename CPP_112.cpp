#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

pair<string, string> reverse_delete(string s, string c) {
    string result;
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }
    string result_reversed = result;
    reverse(result_reversed.begin(), result_reversed.end());
    return {result, result == result_reversed ? "True" : "False"};
}

int main() {
    assert (issame(reverse_delete("mamma", "mia") , {"", "True"}));
    return 0;
}