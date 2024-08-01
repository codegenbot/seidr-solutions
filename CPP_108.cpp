#include <iostream>
#include <vector>
#include <cmath>

int count_nums(std::vector<int> n) {
    int count = 0;
    for (int num : n) {
        int sum = 0;
        int temp = abs(num);
        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum > 0) {
            count++;
        }
    }
    return count;
}

int main() {
    std::vector<int> numbers = {123, -456, 789};
    std::cout << count_nums(numbers) << std::endl;
    
    return 0;
}