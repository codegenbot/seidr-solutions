#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}