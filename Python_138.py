```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        even_sum = 0
        for j in range(i):
            if even_sum + (i*2) == n:
                return True
            even_sum += i*2
    return False