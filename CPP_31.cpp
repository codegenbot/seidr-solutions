```cpp
bool is_prime(int num) {
    for(int i = 2; i*i <= num; i++) {
        if(num % i == 0)
            return false;
    }
    return true;
}