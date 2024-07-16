```Python
def is_equal_to_sum_even(n):
    for i in range(2, n + 1, 2):
        sum_even = 0
        for j in range(2, i // 2 + 1, 2):
            sum_even += j
            if sum_even == n:
                return True
            elif sum_even > n:
                break
    return False