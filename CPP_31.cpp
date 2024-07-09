bool is_divisor = false;
for (long long i = 2; i * i <= n; ++i) {
    if (n % i == 0) {
        is_divisor = true;
        break;
    }
}
return !is_divisor;