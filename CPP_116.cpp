```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size()!=b.size()) return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]) return false;
    }
    return true;
}

std::vector<int> sort_array(const auto& arr) {
    std::vector<int> temp = arr; // to avoid modifying the original array
    std::sort(temp.begin(), temp.end());
    return temp;
}

int main_test() {
    assert(issame(sort_array({2,4,8,16,32}), {2, 4, 8, 16, 32}));
    return 0;
}