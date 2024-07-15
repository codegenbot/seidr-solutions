```cpp
#include <vector>

std::vector<int> leaders(std::vector<int>& vec) {
    std::vector<int> result;
    int maxRight = vec.back();
    for (int i = vec.size() - 1; i >= 0; --i) {
        if (vec[i] > maxRight) {
            maxRight = vec[i];
            result.push_back(maxRight);
        } else if (maxRight == vec[i]) {
            result.push_back(maxRight);
        }
    }
    return result;
}

int main() {
    std::vector<int> input = {7, 5, 2, 4};
    std::vector<int> result = leaders(input);
    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}