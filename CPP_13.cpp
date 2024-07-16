if (a == 0)
        return b;
    return greatest_common_divisor(b % a, a);
}