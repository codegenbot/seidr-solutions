```c++
#include <iostream>
#include <vector>

bool issame(int x) {
    return true;
}

std::vector<int> filter_integers(std::vector<int> numbers) {
    std::vector<int> result;
    for (int number : numbers) {
        if (issame(number)) {
            result.push_back(number);
        }
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of integers: ";
    std::cin >> n;

    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter integer " << i + 1 << ": ";
        std::cin >> numbers[i];
    }

    std::vector<int> filtered_numbers = filter_integers(numbers);

    if (!filtered_numbers.empty()) {
        std::cout << "Filtered integers: ";
        for (int number : filtered_numbers) {
            std::cout << number << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "No integers to filter." << std::endl;
    }

    return 0;
}