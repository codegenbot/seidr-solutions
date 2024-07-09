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

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.empty() && b.empty()) return true;
    return (a == b);
}

int main() {
    int index = pluck({7, 9, 7, 1});
    assert(issame({}, {(index == -1) ? std::vector<int>() : (index % 2 == 0) ? std::vector<int>() : std::vector<int>({1}))}); 
    return 0;
}