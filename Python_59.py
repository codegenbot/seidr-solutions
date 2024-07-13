def largest_prime_factor(n):
    if n < 2:
        return n
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
    return n

n = int(input("Enter a number: "))
print(largest_prime_factor(n))