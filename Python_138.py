```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        if sum(j for j in range(2, i+1, 2) if i == j + (n - i)) and len([j for j in range(2, i+1, 2) if i == j + (n - i)]) == 4:
            return True
    return False