```
def is_equal_to_sum_even(n):
    for a in range(2, n+1, 2):
        even_sum = 0
        for b in range(a, n+1, 2):
            if b + a > n:
                break
            for c in range(b, n+1, 2):
                if c + b + a > n:
                    break
                for d in range(c, n+1, 2):
                    even_sum = a + b + c + d
                    if even_sum == n:
                        return True
    return False