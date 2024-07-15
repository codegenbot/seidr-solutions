```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        remaining = n - i
        if remaining > 0 and is_sum_of_four_evens(remaining):
            return True
    return False

def is_sum_of_four_evens(k):
    for i in range(2, k//2 + 1, 2):
        if k - i <= 2:
            return True
        if k - i not in range(0, k//2 + 1, 2):
            return False
    return False