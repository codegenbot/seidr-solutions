def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        total = sum(j for j in range(2, (i+n)//2+1, 2) if (i+j) == n)
        if total:
            return True
    return False