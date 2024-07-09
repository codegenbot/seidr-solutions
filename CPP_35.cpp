```cpp
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
    for(int i=0; ;i++){
        int num;
        std::cin >> num;
        numbers.push_back(num);
        if(i == 4) break; 
    }
    findMax(numbers);
    assert (std::abs(std::max_element({5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10}) - 12)<1e-4);

    return 0;
}