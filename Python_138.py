```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        remaining = n - i
        if remaining % 2 != 0:
            return False
        for j in range(i+2, n+1, 2):
            if remaining - j > i:
                break
            remaining -= j
        else:
            return True
    return False