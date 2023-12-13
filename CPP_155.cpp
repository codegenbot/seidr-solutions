#include <iostream>
#include <vector>

bool issame(int a, int b) {
    return (a == b);
}

std::vector<int> even_odd_count(int num) {
    std::vector<int> count_even(2);
    while (num > 0) {
        if (num % 2 == 0) {
            count_even[0]++;
        } else {
            count_even[1]++;
        }
        num /= 10;
    }
    return count_even;
}

int main() {
    int result = even_odd_count(123456789);
    if (issame(result, {9, 0})) {
        std::cout << "The result is correct!" << std::endl;
    } else {
        std::cout << "The result is incorrect." << std::endl;
    }
    return 0;
}