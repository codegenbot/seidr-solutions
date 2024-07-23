#include <vector>
#include <iostream>

int count_nums(std::vector<int> n) {
    int count = 0;
    for (int num : n) {
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
    std::vector<int> numbers;
    int n;
    std::cout << "Enter the number of inputs: ";
    std::cin >> n;
    
    for(int i = 0; i < n; i++) {
        int num;
        std::cout << "Enter the " << (i+1) << "th number: ";
        std::cin >> num;
        numbers.push_back(num);
    }
    
    std::cout << "The count of positive sums is: " << count_nums(numbers) << std::endl;
    
    return 0;