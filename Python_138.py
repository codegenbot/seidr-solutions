```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        for j in range(i+1, n+1, 2):
            if i + j == n:
                return True
            elif i + j > n:
                break
    return False