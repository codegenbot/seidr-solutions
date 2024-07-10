```cpp
int prime_fib(int n) {
    int a = 0, b = 1, count = 0;
    string fibResult = "";
    while (true) {
        if (isPrime(b))
            count++;
        if (count == n) {
            fibResult += to_string(b);
            return stoi(fibResult); 
        }
        a += b;
        b = a - b;
    }
}