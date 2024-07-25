#include <iostream>
#include <cassert>
#include <vector>
#include <algorithm>
#include <functional>

namespace ArrayUtils {
    bool issame(std::vector<int> a, std::vector<int> b){
        if(a.size() != b.size()) return false;
        for(int i = 0; i < a.size(); ++i){
            if(a[i] != b[i]) return false;
        }
        return true;
    }

    std::vector<int> sort_array(std::vector<int> array){
        if(array.empty()) return array;
        if((array.front() + array.back()) % 2 == 0)
            std::sort(array.begin(), array.end(), std::greater<int>());
        else
            std::sort(array.begin(), array.end());
        return array;
    }
}

int main() {
    assert(ArrayUtils::issame(ArrayUtils::sort_array(std::vector<int>{21, 14, 23, 11}), std::vector<int>{23, 21, 14, 11}));
    return 0;
}