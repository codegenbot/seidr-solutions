def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        remaining = n - i
        found = False
        for j in range(2, (remaining + 1) // 2 + 1, 2):
            if i == j:
                found = True
                break
        if not found:
            return False
    return True