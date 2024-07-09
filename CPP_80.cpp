```cpp
#include <iostream>
#include <string>

bool is_happy(int n);

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;  
    if (is_happy(num)) {
        std::cout << num << " is a happy number.\n";
    } else {
        std::cout << num << " is not a happy number.\n";
    }
    return 0;
}

bool is_happy(int n) {
    if (n < 1)
        return false;
    while (n != 1) {
        int sum = 0;
        for (int i = 0; i <= to_string(n).size(); i++) {
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        if (sum < 1)
            return false;
        n = sum;
    }
    return true;
}