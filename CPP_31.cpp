```cpp
bool is_divisible = false;
long long i = 2;
while (i * i <= n && !is_divisible) {
    if (n % i == 0) {
        is_divisible = true;
    }
    ++i;
}
return !is_divisible;