```
#include <iostream>

int fib4(int n) {
    if (n <= 3) {
        return 0;
    } else if (n == 4) {
        return 2;
    } else {
        int a = 0, b = 0, c = 2;
        for (int i = 5; i <= n; i++) {
            int temp = a + b + c;
            a = b;
            b = c;
            c = temp;
        }
        return c;
    }
}

int main() {
    std::cout << "Enter a number: ";
    int n;
    std::cin >> n;
    std::cout << "The " << n << "th Fib4 number is: " << fib4(n) << std::endl;
    return 0;
}
```
Note that the code has been properly formatted as a block quote, and any stray backticks have been removed. Additionally, I have checked for any other formatting errors or missing closing tags in the code, but did not find any.