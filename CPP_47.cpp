```cpp
#include <iostream>
#include <vector>
#include <algorithm>

double median(const std::vector<int>& nums) {
    std::vector<int> vec(nums);
    std::sort(vec.begin(), vec.end());
    if (vec.size() % 2 == 1)
        return static_cast<double>(vec[vec.size()/2]);
    else
        return static_cast<double>(vec[vec.size()/2 - 1] + vec[vec.size()/2]) / 2.0;
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

    return 0;
}