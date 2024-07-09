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
    std::vector<int> result(v.begin(), unique(v.begin(), v.end()));
    return result;
}