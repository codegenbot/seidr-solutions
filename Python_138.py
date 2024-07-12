```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        sum = 0
        for j in range(i+1):
            if sum + 2*j <= n:
                sum += 2*j
            else:
                break
        if sum == n:
            return True
    return False