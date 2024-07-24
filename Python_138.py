def is_equal_to_sum_even(n):
    return any(i + (i+2) + (i+4) + (i+6) == n for i in range(0, n//3*2+1))