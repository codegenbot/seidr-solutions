#include <vector>
#include <iostream>

int add(const std::vector<int>& numbers) {
    int sum = 0;
    for (int i = 0; i < numbers.size(); i++) {
        if (i % 2 != 0) { // odd-indexed numbers
            sum += numbers[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> numbers;
    int num;

    std::cout << "Enter some numbers (enter -1 when you are done):" << std::endl;

    for (;;) {
        std::cin >> num;
        if (num == -1) break;
        numbers.push_back(num);
    }

    int result = add(numbers);
    std::cout << "Sum of odd-indexed numbers: " << result << std::endl;

    return 0;
}