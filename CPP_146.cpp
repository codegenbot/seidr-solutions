#include <vector>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    std::vector<int> nums;
    std::cout << "Enter the number of integers: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        std::cout << "Enter integer #"<<i+1<<": ";
        std::cin >> x;
        nums.push_back(x);
    }
    std::cout << "Number of special integers: " << specialFilter(nums) << std::endl;
    return 0;
}