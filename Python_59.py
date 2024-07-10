```
def largest_prime_factor(n: int):
    i = n - 1
    while i > 1:
        if n % i == 0:
            j = i
            while j <= math.sqrt(i):
                if i % j == 0:
                    i = j
                    break
            return i
        i -= 1
    return None