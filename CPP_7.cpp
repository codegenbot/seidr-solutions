#include <vector>
#include <string>
#include <iostream>
#include <cassert>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> filter_by_substring(const vector<string>& strings, const string& substr) {
    vector<string> result;

    for (const auto& str : strings) {
        if (str.find(substr) != string::npos) {
            result.push_back(str);
        }
    }

    return result;
}

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), vector<string>{"grunt", "prune"}));

    return 0;
}