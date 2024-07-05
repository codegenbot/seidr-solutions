```
def largest_prime_factor(n: int):
    i = n // 2
    while i > 1:
        if n % i:
            i -= 1
        else:
            while n % i == 0:
                n //= i
            i = n // 2
    return i