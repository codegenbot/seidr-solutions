#include <string>

int fizz_buzz(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) { 
        if ((i % 11 == 0 || i % 13 == 0) && containsSeven(i)) 
            count++;
    }
    return count;
}

bool containsSeven(int num) {
    if (num == 0) return false; 
    while (num > 0) {
        if (num % 10 == 7) 
            return true;
        num /= 10; 
    }
    return false;
}