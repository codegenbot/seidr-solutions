```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        total = 0
        for j in range(i):
            if total + 2*j <= n:
                total += 2*j
            else:
                break
        if total == n:
            return True
    return False