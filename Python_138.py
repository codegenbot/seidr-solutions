def is_equal_to_sum_even(n):
    even_sum = sum(i for i in range(2, n+1, 2))
    if even_sum % 2 == 0 and even_sum == n:
        return True
    else:
        return False