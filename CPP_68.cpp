#include <iostream>
#include <vector>
#include <limits>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int pluck(std::vector<int> arr) {
    if (arr.empty()) return -1;

    int minEven = INT_MAX;
    int minIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            minIndex = i;
        }
    }

    return minIndex;
}

int main() {
    int index = pluck({7, 9, 7, 1});
    if (index % 2 == 0 || index == -1) 
        assert(issame({},{}));
    return 0;
}