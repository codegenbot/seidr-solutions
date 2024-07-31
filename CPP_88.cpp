#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> sort_array(std::vector<int> array) {
    if (array.empty()) {
        return array;
    }

    if ((array.front() + array.back()) % 2 == 0) {
        std::sort(array.begin(), array.end(), std::greater<int>());
    } else {
        std::sort(array.begin(), array.end());
    }

    return array;
}