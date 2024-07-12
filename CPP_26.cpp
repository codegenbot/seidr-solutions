```cpp
#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool isSame(vector<int> a, vector<int> b) {
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

vector<int> removeDuplicates(vector<int> numbers) {
    unordered_set<int> uniqueNumbers(numbers.begin(), numbers.end());
    return vector<int>(uniqueNumbers.begin(), uniqueNumbers.end());
}

int main() {
    assert(isSame(removeDuplicates({1, 2, 3, 2, 4, 3, 5}), vector<int>{1, 4, 5}));
    return 0;
}