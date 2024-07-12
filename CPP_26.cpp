```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> remove_duplicates(std::vector<int> v) {
    std::vector<int> result;
    for (int x : v) {
        if (std::find(result.begin(), result.end(), x) == result.end())
            result.push_back(x);
    }
    return result;
}

int main() {
    std::vector<int> test1 = remove_duplicates({1, 2, 3, 2, 4, 3, 5});
    assert (areSameVectors(test1, {1, 2, 3, 4, 5}));
    return 0;
}