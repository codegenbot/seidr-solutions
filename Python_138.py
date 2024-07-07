def is_equal_to_sum_even(n):
    for i in range(2, n + 1, 2):
        even_sum = sum(j for j in range(2, i, 2))
        if even_sum == n:
            return True
    return False