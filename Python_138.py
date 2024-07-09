```python
def is_equal_to_sum_even(n):
    if n % 2 != 0:
        for i in range(2, n+1, 2):
            remaining = n - i
            even_sum = sum(range(2, min(i, remaining)+1, 2))
            if even_sum == n:
                return True
        return False
    return True