```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        sum_num = 0
        for j in range(i, n+1, 2):
            if sum_num + j == n:
                return True
            sum_num += j
    return False