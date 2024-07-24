#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

void filter_by_substring(vector<string>& vec, string substr) {
    vec.erase(std::remove_if(vec.begin(), vec.end(), [substr](const string& s) {
        return s.find(substr) == string::npos;
    }), vec.end());
}

int main() {
    vector<string> vec = {"run", "running", "runner"};
    vector<string> expected = {"run", "running"};
    
    filter_by_substring(vec, "run");
    assert(issame(vec, expected));

    return 0;
}