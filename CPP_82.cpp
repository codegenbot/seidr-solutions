```
#include <iostream>
#include <cmath>

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool prime_length(string str) {
    int len = str.size();
    return is_prime(len);
}
```
Note: In the original code, there was a naming conflict between the function `prime_length` and the variable `isPrime`. I've renamed the function to `is_prime` to avoid this conflict.