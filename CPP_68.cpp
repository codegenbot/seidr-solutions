#include <vector>
#include <cassert>
#include <iostream>

std::vector<int> pluck(std::vector<int> arr) {
    int minEven = -1;
    int minIndex = -1;
    
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] % 2 == 0) {
            if (minEven == -1 || arr[i] < minEven) {
                minEven = arr[i];
                minIndex = i;
            }
        }
    }
    
    if (minEven == -1) {
        return {};
    } else {
        return {minEven, minIndex};
    }
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), {}));
    assert(issame(pluck({7, 9, 2, 1}), {2, 2}));

    std::cout << "All tests passed successfully!" << std::endl;
    return 0;
}