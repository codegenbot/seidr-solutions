#include <vector>
#include <iostream>

int luhn(const std::vector<int>& digits) {
    std::vector<int> temp = digits; 
    int sum = 0;
    for (int i = temp.size() - 1; i >= 0; i--) {
        if (i % 2 == 0) {
            temp[i] *= 2;
            if (temp[i] > 9)
                temp[i] -= 9;
        }
        sum += temp[i];
    }
    return sum;
}

int main() {
    std::vector<int> input(16);
    for (int i = 0; i < 16; i++) {
        std::cin >> input[i];
    }
    int result = luhn(input);
    std::cout << "The Luhn check sum is: " << result << std::endl;
    return 0;
}