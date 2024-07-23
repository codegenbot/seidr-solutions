```cpp
#include <iostream>
#include <vector>

int count_nums(std::vector<int> n) {
    int count = 0;
    for (int num : n) {
        if (num < 0) {
            num = -num;
        }
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        if (sum > 1) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> n = {11, 22, 33};
    std::cout << "Number of numbers: " << count_nums(n) << std::endl;
    return 0;
}