```cpp
#include <iostream>

bool is_happy(int n);

int main() {
    std::cout << "Enter a number: ";
    int num = 19; 
    if (is_happy(num)) {
        std::cout << num << " is a happy number.\n";
    } else {
        std::cout << num << " is not a happy number.\n";
    }
    return 0;
}

bool is_happy(int n) {
    if(n < 10)
        return n == 1;
    int sum = 0, remainder;
    do{
        while (n != 0){
            remainder = n % 10;
            sum += remainder * remainder;
            n /= 10;
        }
        n = sum;
        sum = 0;
    }while(n > 9);
    return n == 1;
}