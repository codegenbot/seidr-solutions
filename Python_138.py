def is_equal_to_sum_even(n):
    total = 0
    for i in range(2, n+1):
        if i % 2 != 0:
            continue
        total += i
        if total == n:
            return True
        elif total > n:
            break
    return False