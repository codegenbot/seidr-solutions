```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        remaining = n - i
        if remaining % 2 == 0:
            for j in range(i, remaining+1, 2):
                if j*(3-j) > remaining:
                    return False
            return True
    return False