#include <iostream>
#include <vector>
#include <algorithm>

int search(const std::vector<int>& lst) {
    int maxFreq = 0;
    for (int num : lst) {
        maxFreq = std::max(maxFreq, std::count(lst.begin(), lst.end(), num));
    }
    return (maxFreq > 1) ? maxFreq : -1;
}

int main() {
    std::vector<int> numbers;
    int num;
    while (std::cin >> num) {
        numbers.push_back(num);
    }
    std::cout << search(numbers) << std::endl;
    return 0;
}