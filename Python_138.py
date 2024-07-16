def is_equal_to_sum_even(n):
    even_sum = 0
    for i in range(2, n+1, 2):
        even_sum = i
        while even_sum <= n:
            if even_sum == n:
                return True
            else:
                even_sum += i
    return False