```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        for j in range(i+1, n+1, 2):
            if n == i+j:
                return True
            elif n > i+j:
                break
    return False