#include <iostream>
#include <vector>

int basement(std::vector<int> nums) {
    int sum = 0;
    int negIndex = -1;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0) {
            negIndex = i;
            break;
        }
    }
    return negIndex;
}

int main() {
    std::vector<int> input;
    int n;
    while (std::cin >> n) {
        input.push_back(n);
    }

    int result = basement(input);
    std::cout << result << std::endl;

    return 0;
}