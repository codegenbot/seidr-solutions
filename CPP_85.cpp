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
        if(numbers.size() > 0 && numbers.capacity() < numbers.size()) numbers.reserve(1024);
        numbers.push_back(num);
    }
    int result = add(numbers);
    std::cout << "Sum of odd-indexed numbers: " << result << std::endl;

    return 0;
}