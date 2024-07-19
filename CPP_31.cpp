for (int i = 2; i * i <= n && !is_divisor; ++i) {
    if (n % i == 0) {
        is_divisor = true;
    }
}
return static_cast<int>(!is_divisor);