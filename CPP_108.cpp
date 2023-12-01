#include <vector>

int count_nums(std::vector<int> n) {
    int count = 0;
    for (int num : n) {
        int sum = 0;
        int temp = abs(num);
        while (temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}

int main() {
    // Test the function with sample input
    std::vector<int> nums = {123, -456, 789};
    int result = count_nums(nums);
    
    // Print the result
    std::cout << result << std::endl;
    
    return 0;
}