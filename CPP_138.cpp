#include <iostream>

bool is_equal_to_sum_even(int n) {
    for (int i = 2; ; i += 2) { 
        int sum = 0;
        for (int j = 2; j <= i; j += 2) {
            sum += j;
            if (sum == n)
                return true;
            if (sum > n)
                break;
        }
        if (sum == n)
            return true;
    }
}

int userMain() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    std::cout << "Is the sum of even numbers equal to the entered number? "
              << is_equal_to_sum_even(num) << std::endl;
    
    return 0;
}