```Python
def is_equal_to_sum_even(n):
    total = 0
    for i in range(2, n+1, 2):
        total += i
        if total == n:
            return True
    return False