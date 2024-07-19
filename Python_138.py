```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        sum = 0
        for j in range(2, i+1, 2):
            sum += j
            if sum == n:
                return True
    return False