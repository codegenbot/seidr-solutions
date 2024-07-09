#include <algorithm>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> array) {
    if(array.empty()) return array;
    std::vector<int> sorted_array = array;
    if((array.front() + array.back()) % 2 == 0)
        std::sort(sorted_array.rbegin(), sorted_array.rend());
    else
        std::sort(sorted_array.begin(), sorted_array.end());
    return sorted_array;
}

int main() {
    assert(issame(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));
    return 0;
}