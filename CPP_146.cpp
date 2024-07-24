```
#include <iostream>
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

int judgeMain() {
    std::vector<int> input;
    int n;
    std::cout << "Enter the number of elements: ";
    if (!(std::cin >> n)) {
        std::cerr << "Invalid input for number of elements." << std::endl;
        return 1; 
    }
    for (int i = 0; i < n; i++) {
        int num;
        std::cout << "Enter element " << i + 1 << ": ";
        if (!(std::cin >> num)) {
            std::cerr << "Invalid input for element." << std::endl;
            return 1; 
        }
        input.push_back(num);
    }
    int result = specialFilter(input);
    return 0;
}

int main() {
    judgeMain();
    return 0;
}