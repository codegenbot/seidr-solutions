#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

bool isSame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1.size() == v2.size() && v1 == v2;
}

std::vector<int> removeDuplicates(std::vector<int> numbers) {
    std::unordered_map<int, bool> seen = {};
    std::vector<int> result;

    for (int num : numbers) {
        if (seen.find(num) == seen.end()) {
            seen[num] = true;
            result.push_back(num);
        }
    }

    return result;
}

int main() {
    assert(removeDuplicates({1, 2, 3, 2, 4, 3, 5}) == std::vector<int>({1, 2, 3, 4, 5}));

    std::vector<int> nums;
    int num;

    std::cout << "Enter numbers (enter -1 to finish):" << std::endl;

    int numCount = 0;
    while (numCount < 10) {
        std::cout << "Enter a number (-1 to finish):" << std::endl;
        std::cin >> num;
        if (num == -1) {
            break;
        }
        nums.push_back(num);
        numCount++;
    }

    std::vector<int> output = removeDuplicates(nums);

    std::cout << "Duplicated removed: ";
    for (int i : output) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}