#include <iostream>
#include <string>

bool is_happy(int n);

bool is_happy(int n) {
    if(n < 10)
        return n % 10 == 1 && n != 1;
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

int main() {
    int num;
    while(true) {
        std::cout << "Enter a number: ";
        std::cin >> num;  
        if (std::cin.fail()) {
            std::cout << "Invalid input. Please enter an integer.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }
    if (is_happy(num)) {
        std::cout << num << " is a happy number.\n";
    } else {
        std::cout << num << " is not a happy number.\n";
    }
    return 0;
}