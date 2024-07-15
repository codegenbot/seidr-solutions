#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> pluck(std::vector<int> v) {
    std::vector<int> result;
    for(int i = 0; i < v.size(); i += 2) {
        result.push_back(v[i]);
    }
    return result;
}