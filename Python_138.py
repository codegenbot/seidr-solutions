```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        if n - i < 0:
            return False
        sum_numbers = 0
        for j in range(i+1, n+1, 2):
            if n - i - j > 0:
                sum_numbers += j
            else:
                break
        if sum_numbers == n - i:
            return True
    return False