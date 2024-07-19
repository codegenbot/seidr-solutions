def is_equal_to_sum_even(n):
    for i in range(2, n//2 + 1, 2):
        if sum(j for j in range(i+2, n//2 + 1, 2) if j+i == n):
            return True
    return False