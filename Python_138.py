```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        remaining = n - i
        if remaining > 0 and all(map(lambda x: x % 2 == 0, (i + j for j in range(2, remaining+1, 2)))):
            return True
    return False