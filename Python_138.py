def is_equal_to_sum_even(n):
    for i in range(2, n + 1, 2):
        remaining = n - i
        if remaining % 2 != 0:
            return False
        for j in range(2, remaining + 1, 2):
            if j > i and remaining - j > i:
                return False
            remaining -= j
        return True