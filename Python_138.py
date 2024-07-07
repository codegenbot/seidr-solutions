```
def is_equal_to_sum_even(n):
    for i in range(2, n//2+1, 2):
        total = 0
        for j in range(i, n//2+1, 2):
            if total + j == n:
                return True
            total += j
    return False