#include <vector> 

std::vector<int> sort_array(std::vector<int> array) {
    if (array.empty()) return array;
    if ((array.front() + array.back()) % 2 == 0) {
        sort(array.begin(), array.end(), std::greater<int>());
    } else {
        sort(array.begin(), array.end());
    }
    return array;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));
    return 0;
}