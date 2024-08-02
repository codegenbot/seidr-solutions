```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> unique(std::vector<int> l) {
    std::vector<int> result(l.begin(),l.end());
    std::sort(result.begin(),result.end());
    auto it = std::unique(result.begin(),result.end());
    result.erase(it,result.end());
    return result;
}