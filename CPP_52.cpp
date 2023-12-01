#include <iostream>
#include <vector>

bool below_threshold(std::vector<int> l, int t) {
    for (int num : l) {
        if (num >= t) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    int threshold = 6;

    bool result = below_threshold(nums, threshold);

    std::cout << "Below threshold: " << std::boolalpha << result << std::endl;

    return 0;
}