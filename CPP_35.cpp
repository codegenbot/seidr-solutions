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
    for(int i=0; i<5; i++){
        int num;
        if (!(num>>std::ws, std::cin).fail()) {  
            numbers.push_back(num);
        } else {
            break;  
        }
    }
    findMax(numbers);
    return 0;
}