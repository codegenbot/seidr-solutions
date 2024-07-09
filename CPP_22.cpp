#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        try {
            int val = boost::any_cast<int>(value);
            result.push_back(val);
        } catch (...) {
            // ignore non-integer values
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(filter_integers({3, boost::any("c"), 3, 3, boost::any("a"), boost::any("b")}), {3, 3, 3}));
    return 0;
}