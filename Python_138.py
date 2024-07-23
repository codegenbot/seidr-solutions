def is_equal_to_sum_odd(n):
    return n == sum(i for i in range(1, (n + 1) // 2 + 1, 2))