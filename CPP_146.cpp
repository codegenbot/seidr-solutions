Here is the modified code:

```cpp
#include<iostream>
#include<vector>

int specialFilter(std::vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;
}

int judgeMain() {
    std::vector<int> input;
    int n;
    while (!(std::cin >> n)) {
        std::cerr << "Invalid input for number of elements. Please try again: ";
        std::cin.clear();  
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  
    }
    for (int i = 0; i < n; i++) {
        int num;
        while (!(std::cin >> num)) {
            std::cerr << "Invalid input for element. Please try again: ";
            std::cin.clear();  
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  
        }
        input.push_back(num);
    }
    int result = specialFilter(input);
    return 0;
}

int main() {
    judgeMain();
    return 0;
}