```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        if n - i > i:
            if is_equal_to_sum_even(n-i) or (n-i == i):
                return True
        else:
            return False
    return True