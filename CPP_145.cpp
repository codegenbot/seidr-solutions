#include <algorithm>
#include <vector>

struct pair {
    int first;
    int second;

    bool operator<(const pair& other) const {
        return first < other.first;
    }
};

bool areVectorsEqual(const std::vector<int>& v1, const std::vector<int>& v2) {
    if(v1.size() != v2.size()) return false;
    for(int i = 0; i < v1.size(); i++) {
        if(std::find(v2.begin(), v2.end(), v1[i]) == v2.end()) return false;
    }
    return true;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    std::vector<pair> pairs;
    for (int i = 0; i < nums.size(); i++) {
        int sumOfDigits = 0;
        int num = nums[i];
        while (num > 0) {
            sumOfDigits += num % 10;
            num /= 10;
        }
        pairs.push_back({sumOfDigits, i});
    }

    std::sort(pairs.begin(), pairs.end());

    std::vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(nums[pair.second]);
    }

    return result;
}

int main() {
    std::vector<int> nums = {0,6,6,-76,-21,23,4};
    std::cout << "Sorted array: ";
    for(int num : order_by_points(nums)) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    if (!areVectorsEqual(order_by_points({0,6,6,-76,-21,23,4}), {-76, -21, 0, 4, 23, 6, 6})) {
        std::cout << "Test failed" << std::endl;
    } else {
        std::cout << "Test passed" << std::endl;
    }
    return 0;
}