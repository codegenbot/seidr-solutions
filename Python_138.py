```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        if n != sum(j for j in range(i, i+4) if j % 2 == 0):
            return False
    return True