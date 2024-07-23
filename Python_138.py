def is_equal_to_sum_even(n):
    for i in range(2, n + 1, 2):
        if sum(range(2, i + 1, 2)) == n:
            return True
    return False