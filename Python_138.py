```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        remaining = n - i
        found = False
        for j in range(2, min(i, remaining//2) + 1, 2):
            if remaining - j == i:
                found = True
                break
        if found:
            return True
    return False