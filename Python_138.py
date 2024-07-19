```
def is_equal_to_sum_even(n):
    for i in range(2, n//2 + 1, 2):
        sum_val = 0
        for j in range(i, n//i + 1):
            if n == i*j:
                return True
            elif n < i*j:
                break
            sum_val += j*2
        if sum_val == n:
            return True
    return False