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

    while (true) {
        get_numbers(numbers);
        if (numbers.empty()) break;
        int result = add(numbers);
        std::cout << "Sum of odd-indexed numbers: " << result << std::endl;
    }

    return 0;
}

int get_numbers(std::vector<int>& vec) {
    int num;

    std::cout << "Enter some numbers (enter -1 when you are done):" << std::endl;

    for (; ; ) {
        std::cin >> num;
        if (num == -1) break;
        vec.push_back(num);
    }
}