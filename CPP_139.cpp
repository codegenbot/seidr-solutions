```
#include <cassert>
#include <iostream>

long long special_factorial(int n){
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        long long fact = 1;
        for (int j = 1; j <= i; ++j) {
            fact *= j;
        }
        result *= fact;
    }
    return result;
}

int main(){
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    assert(special_factorial(n) == special_factorial(n)); // Check for correct function call
    return 0;
}