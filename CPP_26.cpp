```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(std::find(b.begin(), b.end(), a[i]) == b.end()) return false;
    }
    return true;
}

std::vector<int> remove_duplicates(std::vector<int> v) {
    std::vector<int> result(v.begin(), v.end());
    for(int i = 0; i < result.size(); i++) {
        auto it = std::find_if(result.begin() + i + 1, result.end(),
                                [&](int x){return x == result[i];});
        if(it != result.end()) {
            result.erase(it);
            i--;
        }
    }
    return result;
}