```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        remaining = n - i
        if remaining > 0 and sum(j for j in range(2, remaining+1, 2) if j <= remaining) == remaining:
            return True
    return False