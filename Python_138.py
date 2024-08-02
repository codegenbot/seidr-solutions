```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        for j in range(i, n+1, 2):
            for k in range(j, n+1, 2):
                for l in range(k, n+1, 2):
                    if i + j + k + l == n:
                        return True
    return False