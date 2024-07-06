```
def is_equal_to_sum_even(n):
    for i in range(2, n+1):
        for j in range(i+1, n+1):
            k = n - (i + j)
            if k > j and k % 2 == 0:
                return True
    return False