```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        total = 0
        for j in range(i, n+1, 2):
            if j + total == n:
                return True
            total += j
    return False