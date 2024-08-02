```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        remaining = n - i
        if remaining % 4 != 0:
            return False
        for j in range(2, remaining//2 + 1, 2):
            k = remaining - j
            if k % 2 == 0 and k // 2 >= j:
                return True
    return False