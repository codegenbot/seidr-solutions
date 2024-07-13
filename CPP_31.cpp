bool is_divisible = false;
for (long long i = 2; i * i <= n && !is_divisible; ++i) {
    if (n % i == 0) {
        is_divisible = true;
    }
}
return !is_divisible;