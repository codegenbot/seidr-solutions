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
    if(n < 10) return n != 1;
    int sum = 0, temp = n;
    while(temp!=0){
        int digit = temp%10;
        sum += digit * digit;
        temp /= 10;
    }
    if(sum==1) return true;
    else{
        n=sum;
        return is_happy(n);
    }
}