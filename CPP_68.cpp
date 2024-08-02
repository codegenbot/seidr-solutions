#include <vector>
#include <iostream>
#include <cassert>

namespace std {
    bool issame(std::vector<int> a, std::vector<int> b) {
        return a == b;
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
}

bool areEqualVectors(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    std::vector<int> testVec = {1, 2, 3, 4, 5, 6, 7, 8};
    std::vector<int> result = std::pluck(testVec);

    assert(areEqualVectors(result, std::vector<int>{2}));
    
    assert(areEqualVectors(std::pluck({7, 9, 7, 1}), std::vector<int>{}));    

    return 0;
}