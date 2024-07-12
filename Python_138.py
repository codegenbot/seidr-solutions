```
def is_equal_to_sum_even(n):
    for i in range(2, n + 1):
        if i == sum(j for j in range(2, i + 1)):
            return True
    return False