```cpp
#include <vector>
#include <limits>

bool issame(std::vector a, std::vector b) {
    return (a.size() == 0 && b.size() == 0);
}

bool pluckSame(std::vector arr) {
    std::vector result;
    if (arr.empty()) return true;

    int minEven = INT_MAX;
    int minIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            minIndex = i;
        }
    }

    result.push_back(minEven);
    result.push_back(minIndex);

    return false;
}

int main() {
    assert(issame(std::vector({7, 9, 7, 1}), true));
}