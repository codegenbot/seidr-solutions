```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        remaining = n - i
        if remaining % 2 != 0:
            break
        for j in range(i+2, remaining+1, 2):
            if remaining - j > i and remaining - j % 2 != 0:
                break
            if remaining - j == i:
                return True
    return False