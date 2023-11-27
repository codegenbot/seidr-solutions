#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

vector<int> filter_integers(const vector<int>& values) {
    vector<int> result;
    for (const auto& value : values) {
        if (std::is_same_v<decltype(value), int>) {
            result.push_back(value);
        }
    }
    return result;
}

int main() {
    vector<int> filtered = filter_integers({3, 'c', 3, 3, 'a', 'b'});
    assert(issame(filtered, {3, 3, 3}));
    
    return 0;
}