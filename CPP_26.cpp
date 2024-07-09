```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(std::find(b.begin(), b.end(), a[i]) == b.end()) return false;
    }
    return true;
}

std::vector<int> remove_duplicates(std::vector<int> v) {
    std::set<int> s(v.begin(), v.end());
    return std::vector<int>(s.begin(), s.end());
}