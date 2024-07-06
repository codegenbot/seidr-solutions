```
def is_equal_to_sum_even(n):
    for i in range(1, n+1):
        found = False
        for j in range(i+1, n+1):
            k = n - i - j
            if (i+j) % 2 == 0 and k > 0:
                found = True
                break
            elif i+j+k == n:
                found = True
                break
        if not found:
            return False
    return True