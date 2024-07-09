#include <iostream>
#include <string>

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

bool is_happy(int num) {
    if(num < 10)
        return num % 10 == 1 && num != 1;
    int sum = 0, remainder;
    do{
        while (num != 0){
            remainder = num % 10;
            sum += remainder * remainder;
            num /= 10;
        }
        num = sum;
        sum = 0;
    }while(num > 9);
    return num == 1;