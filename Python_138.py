```
def is_equal_to_sum_even(n):
    for i in range(2, n//2+1, 2):
        for j in range(i, n//2+1, 2):
            for k in range(j, n//2+1, 2):
                for last_num in range(k, n//2+1, 2):
                    if i+j+k+last_num == n:
                        return True
    return False