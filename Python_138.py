```
def is_equal_to_sum_even(n):
    for a in range(2, n + 1, 2):
        for b in range(a + 2, n + 1, 2):
            c = d = n
            while a + b + c + d > n:
                c -= 2
                d -= 2
            if a + b + c + d == n:
                return True
    return False