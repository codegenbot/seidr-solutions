```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        total = 0
        for j in range(i, n+1, 2):
            total += j
            if total == n:
                return True
            elif total > n:
                break
    return False