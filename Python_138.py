def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        even_sum = 0
        count = 0
        while even_sum < n and count < 4:
            even_sum += i
            i += 2
            count += 1
        if even_sum == n:
            return True
    return False