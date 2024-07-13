def largest_prime_factor(n: int):
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            is_prime = True
            j = 2
            while j * j <= i:
                if i % j:
                    is_prime = False
                    break
                j += 1
            if is_prime:
                return i
    return n