```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        if i > n:
            break
        remaining = n - i
        count = 0
        j = 2
        while j <= remaining and j < i:
            if j % 2 == 0 and remaining >= j:
                remaining -= j
                count += 1
            j += 1
        if count == 3 and remaining == i:
            return True
    return False