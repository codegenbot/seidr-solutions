```cpp
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool same(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (find(b.begin(), b.end(), a[i]) == b.end()) {
            return false;
        }
    }
    return true;
}

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> result;
    for (int num : numbers) {
        if (find(result.begin(), result.end(), num) == result.end()) {
            result.push_back(num);
        }
    }
    return result;
}

int main() {
    assert(same(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), {1, 4, 5}));
    return 0;
}