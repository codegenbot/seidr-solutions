```
def is_equal_to_sum_even(n):
    for i in range(2, n+1, 2):
        remaining = n - i
        if remaining < 0:
            return False
        for j in range(i+1, remaining+1, 2):
            k = remaining - j
            if k < 0 or not is_even(k):
                break
            l = k - j
            if l < 0 or not is_even(l):
                break
            m = l - i
            if m < 0 or not is_even(m):
                break
            return True
    return False

def is_even(n):
    return n % 2 == 0