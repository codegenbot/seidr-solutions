```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int calculateMedian(std::vector<float> numbers) {
    int n = numbers.size();
    std::sort(numbers.begin(), numbers.end());
    
    if (n % 2 == 0)
        return (numbers[n/2 - 1] + numbers[n/2]) / 2;
    else
        return numbers[n/2];
}

int main() {
    std::vector<float> numbers;
    float num;

    while (std::cin >> num) {
        numbers.push_back(num);
    }

    if (!numbers.empty())
        std::cout << calculateMedian(numbers) << std::endl;

    // assert(std::abs(calculateMedian({8, 1, 3, 9, 9, 2, 7}) - 7.0)<1e-4 );

    return 0;
}