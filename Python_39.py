n = int(input("Enter a number: "))
def prime_fib(n):
    a, b = 0, 1
    primes = []
    while len(primes) < n:
        if n == 0:
            return []
        for i in range(2, b):
            if b % i == 0:
                break
        else:
            primes.append(b)
        a, b = b, a + b
    return primes

print(prime_fib(n))