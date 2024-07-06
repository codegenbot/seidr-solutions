def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        for j in range(i+1, n+1, 2):
            for k in range(j+1, n+1, 2):
                for last in range(k//2 + 1, n+1, 2):
                    if i + j + k + last == n:
                        return True
    return False