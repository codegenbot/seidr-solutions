```cpp
#include <algorithm>
#include <vector>
#include <iostream>
#include <initializer_list>

double median(std::vector<int> numbers) {
    std::sort(numbers.begin(), numbers.end());
    if (numbers.size() % 2 == 0)
        return (numbers.at(numbers.size()/2 - 1) + numbers.at(numbers.size()/2)) / 2.0;
    else
        return numbers.at(numbers.size()/2);
}

int main() {
    std::vector<int> numbers;
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        int num;
        std::cin >> num;
        numbers.push_back(num);
    }

    double result = median(numbers);

    std::cout << "The median of the given array is: " << result << std::endl;

}