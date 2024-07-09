#include <vector>
#include <algorithm>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> maximum(std::vector<int> arr, int k) {
    if(k > arr.size()) {
        std::cout << "Invalid value of k. It must be less than or equal to the size of array." << std::endl;
        return {};
    }
    
    std::vector<int> result = std::vector<int>(arr.begin(), arr.begin() + k);
    std::sort(result.begin(), result.end());
    return result;
}

int main() {
    assert(maximum({1, 2, 3, -23, 243, -400, 0}, 7) == std::vector<int>({0, 2, 3}));
    return 0;
}