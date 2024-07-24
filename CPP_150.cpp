```cpp
int x_or_y(int n, int x, int y) {
    if (n <= 1)
        return y;
    else if (isPrime(n))
        return x;
    else
        return y;
}