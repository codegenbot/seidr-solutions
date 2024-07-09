```cpp
#include <iostream>
#include <vector>

int main() {
    int n;
    std::vector<int> input;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        if(num > 0) {
            input.push_back(num);
        }
    }
    long long result = double_the_difference(input);
    std::cout << "The total sum of squares is: " << static_cast<int>(result) << std::endl;
}

long long double_the_difference(const std::vector<int>& input) {
    long long sum = 0;
    for (const auto& num : input) {
        sum += (long long)num * (long long)num;
    }
    return sum;
}