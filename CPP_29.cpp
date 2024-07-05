#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <algorithm>

using namespace std;

vector<string> filter_by_prefix(const vector<string>& strings, const string& prefix) {
    vector<string> result;
    for(const auto& str : strings) {
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
    vector<string> expected = {"xxx", "xxxAAA", "xxx"};
    assert(issame(filter_by_prefix({"xxx", "asd", "xxy", "john doe", "xxxAAA", "xxx"}, "xxx"), expected));
    cout << "Test passed!" << endl;
    return 0;
}