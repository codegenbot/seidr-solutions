#include <vector>
#include <limits>

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a.size() == 0 && b.size() == 0);
}

bool pluckSame(std::vector<int> arr) {
    std::vector<int> result;
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
    assert(issame(pluckSame({7, 9, 7, 1}), true));
}