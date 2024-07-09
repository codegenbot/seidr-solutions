```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        remaining = n - i
        if remaining % 2 != 0:
            break
        even_sum = sum(range(2, min(i, remaining)+1, 2))
        if even_sum == n:
            return True
    return False