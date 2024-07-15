```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        sum_even = 0
        for j in range(i, n+1, 2):
            if j + sum_even == n:
                return True
            sum_even += j
    return False