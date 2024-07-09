```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        remaining = n - i
        if remaining % 2 != 0:
            break
        even_sum = sum(range(min(i, remaining)+1, max(i, remaining), 2))
        if even_sum == n:
            return True
    return False