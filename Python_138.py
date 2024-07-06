```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        remaining = n - i
        found = False
        for j in range(2, remaining//2 + 1, 2):
            if (i == j + remaining // 2) or (i == j + (remaining-j)//2):
                return True
    return False