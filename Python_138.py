def is_equal_to_sum_even(n):
    for i in range(2, n + 1, 2):
        remaining = n - i
        if remaining > i and is_equal_to_sum_even(remaining):
            return True
    return False