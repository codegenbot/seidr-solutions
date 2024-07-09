```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        even_sum = sum(j for j in range(2, i+1, 2) if i-j >= 4)
        if i == even_sum:
            return True
    return False