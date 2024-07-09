```cpp
#include <iostream>
bool is_happy(int n);

int main() {
    std::cout << "Enter a number: ";
    int num;
    std::cin >> num;  
    if (is_happy(num)) {
        std::cout << num << " is a happy number.\n";
    } else {
        std::cout << num << " is not a happy number.\n";
    }
    return 0;
}
bool is_happy(int n) {
    int sum = 0, remainder = 0;
    while(n > 0){
        remainder = n % 10;
        sum += (remainder * remainder);
        n /= 10;
    }
    if(sum == 1)
        return true;
    else{
        n = sum;
        sum = 0;
        while(n > 0){
            remainder = n % 10;
            sum += (remainder * remainder);
            n /= 10;
        }
    }
    if(sum == 1)
        return true;
    else
        return false;
}