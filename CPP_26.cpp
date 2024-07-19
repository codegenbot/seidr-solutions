#include <iostream>
#include <vector>
#include <unordered_map>
#include <functional>
#include <algorithm>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1.size() == v2.size() && v1 == v2;
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::unordered_map<int, bool, std::hash<int>> seen = {};
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
    assert(remove_duplicates({1, 2, 3, 2, 4, 3, 5}) == std::vector<int>({1, 2, 3, 4, 5}));

    std::vector<int> nums;
    int num;

    std::cout << "Enter numbers (enter -1 to finish):" << std::endl;

    while ((std::cin >> num) && (num != -1)) {
        nums.push_back(num);
    }

    std::vector<int> output = remove_duplicates(nums);

    std::cout << "Duplicated removed: ";
    for (int i : output) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}