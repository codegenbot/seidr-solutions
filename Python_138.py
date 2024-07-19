```
def is_equal_to_sum_even(n):
    for i in range(2, n + 1, 2):
        if n != sum(i + k for k in range(0, (n - i) // 2 + 1, 2)):
            return False
    return True