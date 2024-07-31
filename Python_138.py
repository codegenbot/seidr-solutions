```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        remaining = n - i
        for j in range(i+2, n+1, 2):
            if remaining == j:
                return True
            elif remaining < j:
                break
    return False