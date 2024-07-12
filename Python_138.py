def is_equal_to_sum_even(n):
    even_sum = 0
    for i in range(2, n+1):
        if i % 2 == 0:
            even_sum += i
    return even_sum == n