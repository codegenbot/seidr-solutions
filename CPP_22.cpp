#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <cassert>

using namespace std;

bool operator==(const vector<int>& a, const vector<int>& b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

bool operator!=(const vector<int>& a, const vector<int>& b) {
    return !(a == b);
}

vector<int> filter_integers(list<any> values) {
    vector<int> result; 
    for (const auto& value : values) {
        try {
            int val = any_cast<int>(value);
            if(find(result.begin(), result.end(), val) == result.end())
                result.push_back(val);
        } catch (...) {
            // ignore non-integer values
        }
    }
    return result;
}

int main_func() {
    vector<any> values = {3, int(3), 3, 'a', 'b'};
    assert(std::is_same(filter_integers({3, 'c', 3, 3, 'a', 'b'})), std::vector<int>(std::vector<int>{3, 3, 3}));
    return 0;
}