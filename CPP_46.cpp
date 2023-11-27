#include <iostream>
#include <vector>

int fib4(int n) {
    std::vector<int> fib(n + 1);
    fib[0] = 0;
    fib[1] = 0;
    fib[2] = 2;
    fib[3] = 0;
  
    for (int i = 4; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2] + fib[i - 3] + fib[i - 4];
    }
  
    return fib[n];
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
  
    int result = fib4(n);
    std::cout << "fib4(" << n << ") = " << result << std::endl;
  
    return 0;
}