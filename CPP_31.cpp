bool is_divisible = false;
for (long long i = 2; i * i <= n; ++i) {
    if (n % i == 0) {
        is_divisible = true;
        break;
    }
}
return !is_divisible;