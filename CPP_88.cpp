#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    // Your comparison logic here
}

std::vector<int> sortArray(std::vector<int> array) {
    if(array.empty()) return {};

    if((array.front() + array.back()) % 2 == 0){
        std::sort(array.begin(), array.end(), std::greater<int>());
    } else {
        std::sort(array.begin(), array.end());
    }

    return array;
}

int main() {
    assert(issame(sortArray({21, 14, 23, 11}), {23, 21, 14, 11}));
    // Additional test cases
    return 0;
}