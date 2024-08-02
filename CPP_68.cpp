#include <vector>

namespace std {
    bool issame(const std::vector<int>& a, const std::vector<int>& b) {
        return a == b;
    }
    
    std::vector<int> pluck(std::vector<int> arr);
}

std::vector<int> pluck(std::vector<int> arr) {
    int smallestEven = -1;
    int smallestEvenIndex = -1;

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 0 && (smallestEven == -1 || arr[i] < smallestEven)) {
            smallestEven = arr[i];
            smallestEvenIndex = i;
        }
    }

    if(smallestEvenIndex == -1) {
        return {};
    } else {
        return {smallestEven};
    }
}

int main() {
    assert(std::issame(std::pluck({7, 9, 7, 1}), {}));
    return 0;
}