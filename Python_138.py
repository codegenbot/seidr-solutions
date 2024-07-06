def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        remaining = n - i
        found = False
        for j in range(2, (remaining//2) + 1):
            if remaining % (j*2) == i:
                found = True
                break
        if not found:
            return False
    return True