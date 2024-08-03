```cpp
#include <vector>
#include <algorithm>

bool below_threshold(std::vector<int> l, int t) {
    for (int i : l) {
        if (i >= t) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int threshold = 3;

    if (below_threshold(numbers, threshold)) {
        std::cout << "All numbers are below the threshold." << std::endl;
    } else {
        std::cout << "At least one number is not below the threshold." << std::endl;
    }

    return 0;
}