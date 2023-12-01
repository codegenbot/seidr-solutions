#include <vector>
#include <climits>
#include <cassert>

std::vector<int> pluck(std::vector<int> arr);
bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    int smallestValue = INT_MAX;
    int smallestIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestValue) {
            smallestValue = arr[i];
            smallestIndex = i;
        }
    }

    if (smallestIndex != -1) {
        result.push_back(smallestValue);
        result.push_back(smallestIndex);
    }

    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    // Implementation of issame function goes here
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), {}));
    // Add more test cases here

    return 0;
}