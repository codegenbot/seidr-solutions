```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        remaining = n - i
        even_sum = 0
        for j in range(2, remaining+1, 2):
            even_sum += j
            if even_sum == remaining:
                return True
    return False