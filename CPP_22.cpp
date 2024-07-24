```
#include <iostream>
#include <vector>
#include <optional>

using namespace std;

vector<int> filter_integers(vector<optional<int>> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (value.has_value()) {
            result.push_back(value.get());
        }
    }
    return result;
}

bool is_same(const vector<int>& a, const vector<int>& b) {
    return a == b;
}