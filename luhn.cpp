#include <iostream>
#include <vector>

int luhn(std::vector<int> digits) {
    int sum = 0;
    bool doubleNext = false;
    for (int i : digits) {
        if (doubleNext) {
            int doubled = i * 2;
            if (doubled > 9) {
                sum += doubled - 9;
            } else {
                sum += doubled;
            }
            doubleNext = false;
        } else {
            sum += i;
            doubleNext = true;
        }
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> digits(n);
    for (int& digit : digits) {
        std::cin >> digit;
    }
    std::cout << luhn(digits) << std::endl;
    return 0;
}