#include <iostream>
#include <string>

bool is_happy(int n) {
    if (n < 1) return false;
    int slow = n, fast = n;

    do {
        slow = digit_sum(slow);
        fast = digit_sum(digit_sum(fast));
    } while (slow != fast);

    return slow == 1;
}

int main() {
    int num; 
    std::cout << "Enter a number: ";
    std::cin >> num;
    if(is_happy(num)) 
        std::cout << "The number is happy.\n";
    else
        std::cout << "The number is not happy.\n";
    return 0;
}