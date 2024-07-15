```cpp
#include <vector>
#include <algorithm>

std::vector<int> leaders(std::vector<int>& vec) {
    std::vector<int> result;
    int maxRight = 0;
    for (int i = vec.size() - 1; i >= 0; --i) {
        if (vec[i] >= maxRight) {
            result.push_back(vec[i]);
            maxRight = vec[i];
        }
    }
    return result;
}

std::vector<int> leaders(std::vector<int>& vec) {
    std::vector<int> result;
    int rightMax = 0;
    for (int i = vec.size() - 1; i >= 0; --i) {
        if (vec[i] >= rightMax) {
            result.push_back(vec[i]);
            rightMax = vec[i];
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