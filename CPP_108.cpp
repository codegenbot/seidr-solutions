#include <iostream>
#include <vector>

int count_nums(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (num < 0) {
            num = -num;
        }
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> input;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        int num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        input.push_back(num);
    }
    std::cout << "Number of positive sums: " << count_nums(input) << std::endl;
    return 0;
}