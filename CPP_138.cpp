#include <iostream>

bool is_equal_to_sum_even(int n) {
    for (int i = 2; i <= n; i += 2) {
        int sum = 0;
        for (int j = 2; j <= i/2 + 1; j += 2) {
            if (sum + j > n)
                break;
            sum += j;
            if (sum == n)
                return true;
        }
    }
    return false;
}

int userMain() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    std::cout << "Is the sum of even numbers equal to the entered number? "
              << is_equal_to_sum_even(num) << std::endl;
    
    return 0;
}