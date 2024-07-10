def is_equal_to_sum_even(n):
    return n == sum(i for i in range(2, n + 1, 2))