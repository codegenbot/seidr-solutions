```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        if sum(j for j in range(2, i+1, 2) if i == sum(range(2, j+1, 2))):
            return True
    return False