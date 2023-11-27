#include <vector> 

int count_nums(vector<int> n) {
    int count = 0;
    for (int num : n) {
        int sum = 0;
        int absNum = abs(num);
        while (absNum != 0) {
            sum += absNum % 10;
            absNum /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}

int main() {
    // Implementation for the main function
    // Prompt the user to enter the vector of integers
    int size;
    std::cout << "Enter the size of the vector: ";
    std::cin >> size;

    std::vector<int> nums(size);
    std::cout << "Enter the elements of the vector: ";
    for (int i = 0; i < size; i++) {
        std::cin >> nums[i];
    }

    // Call the count_nums function and display the result
    int result = count_nums(nums);
    std::cout << "Count of integers whose sum of digits is greater than 0: " << result << std::endl;

    return 0;
}