```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        sum_numbers = 0
        for j in range(i, n+1, 2):
            sum_numbers += j
            if sum_numbers == n:
                return True
            elif sum_numbers > n:
                break
    return False