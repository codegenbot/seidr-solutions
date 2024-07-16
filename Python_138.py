def is_equal_to_sum_even(n):
    even_sum = 0
    for i in range(2, n+1, 2):
        for j in range(i, n+1, 2):
            even_sum += j
            if even_sum == n:
                return True
            elif even_sum > n:
                return False