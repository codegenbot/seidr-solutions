#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

vector<int> filter_integers(list<cpp_any> values) {
    vector<int> result({3, 'c'}); // Initialize with {3, 'c'}
    for (const auto& value : values) {
        try {
            int val = boost::any_cast<int>(value);
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

int test_main() {
    assert(is_same(filter_integers({{3, 'c'}, 3, 3, {'a', 'b'}}), {3, 3, 3}));
    return 0;
}