#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums;
    int num;

    while (std::cin >> num || !std::cin.eof()) {
        if (std::cin.fail()) {
            break;
        }
        nums.push_back(num);
    }

    std::vector<int> leaders;
    int current_leader = nums.back();
    leaders.push_back(current_leader);

    for (int i = nums.size() - 2; i >= 0; --i) {
        if (nums[i] >= current_leader) {
            current_leader = nums[i];
            leaders.push_back(current_leader);
        }
    }

    for (int i = leaders.size() - 1; i >= 0; --i) {
        std::cout << leaders[i] << ' ';
    }

    return 0;
}