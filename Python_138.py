```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        if n - i > 0:
            j = k = n - i
            while j >= 2 and k >= 2:
                if j + k == n:
                    return True
                elif j + k < n:
                    k -= 2
                else:
                    j -= 2
        else:
            break
    return False