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
    std::set<int> s;
    for(int i = 0; i < v.size(); i++) {
        s.insert(v[i]);
    }
    std::vector<int> result(s.begin(), s.end());
    return result;
}