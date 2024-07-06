def is_equal_to_sum_even(n):
    if n % 2 != 0:  
        return False
    for i in range(2, n + 1, 2):
        if sum(j for j in range(2, i + 1, 2)) == n:
            return True
    return False