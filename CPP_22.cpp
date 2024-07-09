#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

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

bool is_same(vector<int> a, vector<int> b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

int main_func() {
    list<any> values = {3, 3, 3};
    assert(is_same(filter_integers(values), vector<int>{3, 3, 3}));
    return 0;
}