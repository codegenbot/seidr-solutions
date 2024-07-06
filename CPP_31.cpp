```cpp
bool is_prime(long long n) {
    if(n <= 1) return false;
    for(int i = 3; i * i <= n; i += 2) { 
        if(n % i == 0) return false;
    }
    return true;
}