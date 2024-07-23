```
#include <vector>
#include <iostream>
#include <initializer_list>

std::vector<std::pair<int, int>> result(const std::vector<int>& arr) {
    std::vector<std::pair<int, int>> output;
    for (int i = 0; i < arr.size(); ++i) {
        output.push_back({arr[i], i});
    }
    return output;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4};
    std::vector<std::pair<int, int>> output = result(arr);
    for (auto p : output) {
        std::cout << "Number: " << p.first << ", Index: " << p.second << std::endl;
    }
    return 0;
}