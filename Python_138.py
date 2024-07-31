```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        if sum(j for j in range(2, (i+n)//2+1, 2) if i == n-j) and len([j for j in range(2, (i+n)//2+1, 2) if i == n-j]) == 4:
            return True
    return False