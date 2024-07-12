```cpp
#include <iostream>
#include <vector>
#include <set>
#include <cassert>

using namespace std;

bool same(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    set<int> bset(b.begin(), b.end());
    for (int i = 0; i < a.size(); ++i) {
        if (bset.find(a[i]) == bset.end()) {
            return false;
        }
    }
    return true;
}

vector<int> remove_duplicates(vector<int> numbers) {
    set<int> s(numbers.begin(), numbers.end());
    vector<int> result(s.begin(), s.end());
    return result;
}

int main() {
    assert(same(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), vector<int>{1, 4, 5}));
    return 0;
}