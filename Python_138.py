def is_equal_to_sum_even(n):
    return n % 2 == 0 and any(is_even(n - i) for i in range(1, int(n / 2)))