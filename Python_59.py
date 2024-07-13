```
def largest_prime_factor(n: int):
    i = n - 1
    while i > 1:
        if n % i == 0:
            is_prime = True
            j = 2
            while j <= i ** 0.5:
                if i % j == 0:
                    is_prime = False
                    break
                j += 1
            if is_prime:
                return i
        i -= 1
    return None