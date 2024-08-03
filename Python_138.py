def is_equal_to_sum_even(n):
    for i in range(2, n + 1, 2):
        even_sum = sum(range(i, n + 1, 2))
        if i + even_sum == n:
            return True
    return False