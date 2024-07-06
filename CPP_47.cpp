#include <cassert>
#include <algorithm>
#include <vector>
#include <cmath>

float median(std::vector<float> numbers) {
    std::sort(numbers.begin(), numbers.end());
    if (numbers.size() % 2 == 0)
        return (numbers[numbers.size()/2 - 1] + numbers[numbers.size()/2]) / 2;
    else
        return numbers[numbers.size()/2];
}

int main() {
    float num;
    std::vector<float> numbers;
    while(std::cin >> num) {
        numbers.push_back(num);
    }
    std::cout << median(numbers) << std::endl;
    return 0;
}