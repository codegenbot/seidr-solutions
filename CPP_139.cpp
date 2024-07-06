#include <iostream>

long long fact(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

long long special_factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= fact(i);
    }
    return result;

}

int main() {
    assert(special_factorial(5) == 120);  
    std::cout << "Hello, World!" << special_factorial(5) << std::endl;
    return 0;
}