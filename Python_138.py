```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        if sum(j for j in range(i, 0, -i) if j % i == 0 and j <= n) == n:
            return True
    return False