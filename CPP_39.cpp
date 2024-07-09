```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Enter a number: ";
    int n;
    cin >> n;

    if (!(n >= 1 && n <= 9)) { 
        cout << "-1" << endl; 
    } else {
        int num = n; // store n as an integer
        int result = prime_fib(num);
        string suffix;
        if (num == 1) {
            suffix = "st";
        } else if (num == 2) {
            suffix = "nd";
        } else if (num == 3) {
            suffix = "rd";
        } else {
            suffix = "th";
        }
        cout << "The " << std::to_string(result) << suffix << " prime Fibonacci number is: ";
        cout << std::to_string(result) << endl;
    }

    return 0;
}

bool isPrime(int num) {
    if (num <= 1)
        return false; 
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return false;
    return true;
}

int prime_fib(int n) {
    if (n <= 0)
        return -1; 
    int a = 1, b = 1, count = 2;
    while (true) {
        if (isPrime(b))
            if (++count == n)
                return b;
        int temp = a + b;
        a = b;
        b = temp;
    }
}