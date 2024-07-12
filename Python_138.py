```
def is_equal_to_sum_even(n):
    for a in range(2, n+1, 2):
        for b in range(2, (n-a)//2+1, 2):
            if a + 2*b == n:
                return True
    return False