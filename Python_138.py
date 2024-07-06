def is_equal_to_sum_even(n):
    return any(sum(range(2, i+1, 2)) == n for i in range(2, n+1, 2))