#include <iostream>
#include <vector>

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
        if (!(std::cin >> num) || num == -1) break;
        numbers.push_back(num);
    }
    
    while (std::cin.fail()) {
        std::cout << "Invalid input! Please enter some numbers: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    int result = add(numbers);
    std::cout << "Sum of odd-indexed numbers: " << result << std::endl;

    return 0;
}