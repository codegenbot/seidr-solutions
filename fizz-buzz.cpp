#include <iostream>

char* fizzBuzz(int x) {
    char* result;
    if (x % 15 == 0) {
        return "FizzBuzz";
    } else if (x % 3 == 0) {
        return "Fizz";
    } else if (x % 5 == 0) {
        return "Buzz";
    } else {
        char temp[10];
        sprintf(temp, "%d", x);
        result = temp;
    }
    return result;
}