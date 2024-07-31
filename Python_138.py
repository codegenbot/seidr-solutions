def is_equal_to_sum_even(n):
    for i in range(2, n + 1, 2):
        total = 0
        j = 2
        while True:
            if i == n - j:
                return True
            elif j > (i + n) // 2:
                break
            total += j
            j += 2
    return False