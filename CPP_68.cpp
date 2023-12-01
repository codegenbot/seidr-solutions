#include <vector>
#include <climits>
#include <cassert>

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    int smallestIndex = -1;
    int smallestEvenValue = INT_MAX;
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEvenValue) {
            smallestEvenValue = arr[i];
            smallestIndex = i;
        }
    }
    
    if (smallestIndex != -1) {
        result.push_back(smallestEvenValue);
        result.push_back(smallestIndex);
    }
    
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    // implementation of issame function
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), {}));
    
    return 0;
}