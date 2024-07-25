```
#include <iostream>
#include <algorithm>
#include <vector>

bool operator==(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size() - 1; ++i) {
        if ((arr[i] & (arr[i + 1] - 1)) != 0)
            return {};
    }
    return arr;
}

int main() {
    std::vector<int> result = sort_array({2,4,8,16,32});
    std::cout << "Sorted array: ";
    for(int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}