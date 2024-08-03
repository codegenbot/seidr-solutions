#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
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
    string input_s, input_c;
    cin >> input_s >> input_c;
    vector<string> expected_result;
    expected_result.push_back("");
    expected_result.push_back("True");
    
    assert(issame(reverse_delete(input_s, input_c), expected_result));
    
    return 0;
}