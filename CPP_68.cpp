#include <iostream>
#include <vector>
#include <limits>

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

bool isSame(const std::vector<int>& v1, const std::vector<int>& v2) {
    if (v1.size() != v2.size()) return false;

    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) return false;
    }

    return true;
}

int main() {
    int index = pluck({7, 9, 7, 1});
    std::vector<int> emptyVector;

    if (index % 2 == 0 || index == -1) {
        if (!isSame({}, emptyVector)) 
            return 0;
    }
}