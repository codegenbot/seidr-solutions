#include <iostream>
#include <vector>
#include <unordered_map>

int main() {
    int64_t n;
    std::cin >> n;

    int64_t target;
    std::cin >> target;

    std::vector<int64_t> nums;
    nums.reserve(n);
    std::unordered_map<int64_t, int64_t> numIndex;

    for (int64_t i = 0; i < n; ++i) {
        int64_t num;
        std::cin >> num;
        nums.push_back(num);

        if (numIndex.find(target - num) != numIndex.end()) {
            std::cout << target - num << " " << num << std::endl;
            return 0;
        }
        numIndex[num] = i;
    }

    std::cout << "No pair found." << std::endl;
    return 0;
}