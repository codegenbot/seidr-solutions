#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <cassert>

using namespace std;

vector<string> filter_by_prefix(const vector<string>& vec, const string& prefix) {
    vector<string> result;
    for (const auto& str : vec) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

int main() {
    auto result = filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx");
    assert(issame(result, vector<string>{"xxx", "xxxAAA", "xxx"}));
    
    cout << "Test Passed!";
    
    return 0;
}