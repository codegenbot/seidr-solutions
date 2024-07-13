```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        remaining = n - i
        if remaining % 2 != 0:
            continue
        for j in range(i+2, remaining+1, 2):
            if j > remaining // 2:
                break
            if remaining - j == i:
                return True
    return False