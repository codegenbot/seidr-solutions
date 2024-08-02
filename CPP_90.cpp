#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> next_smallest(std::vector<int> lst) {
    std::vector<int> v = lst;
    if (v.size() < 2) return v; 
    sort(v.begin(), v.end());
    for (int i = 1; i < v.size(); i++) {
        if (v[i] != v[0]) {
            return v[i];
        }
    }
    return v[0]; 
}