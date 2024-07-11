```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        remaining = n - i
        if remaining < i:
            break
        for j in range(i+2, remaining+1, 2):
            if remaining - j == i:
                return True
    return False