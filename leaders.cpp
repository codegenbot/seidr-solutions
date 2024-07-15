#include <vector>
#include <iostream>

std::vector<int> leaders(std::vector<int>& vec) {
    std::vector<int> result;
    int maxRight = vec.back();
    for (int i = vec.size() - 2; i >= 0; --i) {
        if (vec[i] >= maxRight) {
            result.push_back(vec[i]);
            maxRight = vec[i];
        }
    }
    return result;
}

int main() {
    std::vector<int> input = {16, 17, 4, 3, 5, 2};
    std::vector<int> result = leaders(input);
    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}