```cpp
#include <vector>
#include <algorithm>

std::vector<int> compare(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return {a.size() - (int)std::count(a.begin(), a.end(), 0), 
            b.size() - (int)std::count(b.begin(), b.end(), 0)};
}

bool sameSize(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

int main() {
    assert(sameSize(compare({1,2,3,5},{-1,2,3,4}),{2,0,0,1}));
    // Your logic
    return 0;
}