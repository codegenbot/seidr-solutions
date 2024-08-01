#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i)
        if (a[i] != b[i]) return false;
    return true;
}

std::vector<int> unique(std::vector<int> l){
    std::vector<int> result(l.begin(), l.end());
    std::sort(result.begin(), result.end());
    for (auto it = result.begin(); std::next(it, 1) != result.end(); ++it)
        if (*it == *(std::prev(&result[0], static_cast<std::ptrdiff_t>(it - result.begin() + 1))) && *it != *it)
            it = result.erase(it);
    return result;
}

int main() {
    std::vector<int> a = {1,2,3,4,5};
    std::vector<int> b = {1,2,3,4,5};
    
    if (issame(a,b)) {
        std::cout << "Vectors are same." << std::endl;
    } else {
        std::cout << "Vectors are not same." << std::endl;
    }
    
    return 0;
}