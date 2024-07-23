#include <iostream>
#include <vector>
#include <limits>

int add(const std::vector<int>& vec) {
    int result = 0;
    for (int i = 0; i < vec.size(); i++) {
        if (i % 2 != 0) { 
            result += vec[i];
        }
    }
    return result;
}

int main_func() {
    std::vector<int> numbers;
    int num;

    for (;;) {
        std::cout << "Enter some numbers (enter -1 when you are done):" << std::endl;
        while (!(std::cin >> num) || num == -1) {  
            std::cout << "Invalid input. Please enter an integer or -1 to quit:" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        if (num == -1) break;  
        numbers.push_back(num);
    }
    int result = add(numbers);
    std::cout << "Sum of odd-indexed numbers: " << result << std::endl;

    return 0;
}