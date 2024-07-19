#include <vector>
#include <algorithm>

std::vector<int> sort_array(std::vector<int> array) {
    if (array.empty()) {
        return array;
    }
    
    if ((array.front() + array.back()) % 2 == 0) {
        sort(array.rbegin(), array.rend());
    } else {
        sort(array.begin(), array.end());
    }
    
    return array;
}

int main() {
    assert(sort_array({21, 14, 23, 11}) == std::vector<int>({23, 21, 14, 11}));
    
    return 0;
}