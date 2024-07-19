```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        remaining = n - i
        if remaining % 2 == 0 and sum(even_num for even_num in range(2, int(remaining/2) + 1, 2)) == remaining:
            return True
    return False