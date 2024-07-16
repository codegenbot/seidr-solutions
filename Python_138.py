```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        even_sum = 0
        for j in range(1, 5):
            if i - (j * 2) >= 0:
                even_sum += j * 2
            else:
                break
        if even_sum == n:
            return True
    return False