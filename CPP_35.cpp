#include <iostream>
#include <vector>
#include <algorithm>

int findMax(std::vector<int> numbers) {
    int maxNum = (numbers.empty()) ? -1 : *std::max_element(numbers.begin(), numbers.end());
    if (maxNum != -1)
        std::cout << maxNum << std::endl;
    return 0;
}

int main() {
    std::vector<int> numbers;
    for(int i=0; i<4; i++){
        int num;
        std::cin >> num;
        numbers.push_back(num);
    }
    findMax(numbers);
    return 0;
}