#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> filter_integers(list<any> values) {
    vector<int> result; // Initialize with empty vector
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

bool is_same(vector<int> a, vector<int> b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

int main_func() {
    vector<any> values = {3, int(3), 3, 'a', 'b'};
    assert(is_same(filter_integers(vector<any>({3, 'c', 3, 3, 'a', 'b'}))), vector<int>(vector<int>{3, 3, 3})));
    return 0;
}