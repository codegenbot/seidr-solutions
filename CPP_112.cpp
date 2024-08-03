#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<string> reverse_delete(const string& s, const string& c) {
    string result = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }
    string result_reverse = result;
    reverse(result_reverse.begin(), result_reverse.end());
    return { result, (issame(vector<string>{result}, vector<string>{result_reverse}) ? "True" : "False") };
}

int main() {
    assert(issame(reverse_delete("mamma", "mia"), { "", "True" }));
    
    return 0;
}