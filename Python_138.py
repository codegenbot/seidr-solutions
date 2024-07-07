```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        remaining = n - i
        if remaining > 0 and all(map(lambda x: remaining-x>0 and (remaining-x)%2==0, range(2, remaining//2+1))):
            return True
    return False