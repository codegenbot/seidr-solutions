```
def is_equal_to_sum_even(n):
    for a in range(2, n+1, 2):
        for b in range(a+1, n+1, 2):
            for c in range(b+1, n+1, 2):
                for d in range(c+1, n+1, 2):
                    if a + b + c + d == n:
                        return True
    return False