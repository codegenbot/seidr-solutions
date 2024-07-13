```cpp
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) return false;
    }
    return true;
}

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    if (arr.empty()) return result;

    int minEven = INT_MAX;
    int index = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            index = i;
        }
    }

    if (minEven != INT_MAX) {
        result.push_back(minEven);
        result.push_back(index);
    }

    return result;
}

int main() {
    std::vector<int> input = {1, 2, 3, 4};
    std::vector<int> output = pluck(input);
    // To check if the vectors are same
    bool isSame = issame(input, output);
    if (isSame) {
        for (int i : output) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Vectors are not the same." << std::endl;
    }
    return 0;
}