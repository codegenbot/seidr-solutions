#include <vector>

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    if (arr.empty()) return result;

    int minEvenVal = INT_MAX;
    int minIndex = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEvenVal) {
            minEvenVal = arr[i];
            minIndex = i;
        }
    }

    result.push_back(minEvenVal);
    result.push_back(minIndex);

    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    // implementation
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}) , {}));
    return 0;
}