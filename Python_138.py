def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        if sum(j for j in range(2, i+1, 2) if i == j + sum(k for k in range(2, j+1, 2) if j == k + sum(m for m in range(2, k+1, 2) if j == m + sum(o for o in range(2, m+1, 2))))):
    return True