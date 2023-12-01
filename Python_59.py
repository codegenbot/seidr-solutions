def largest_prime_factor(n: int):
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
    return n

print(largest_prime_factor(13195))
print(largest_prime_factor(2048))