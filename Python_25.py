def factorize(n):
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            factors.append(i)
    if n > 1:
        factors.append(n)
    return factors

try:
    num = 24  # For testing purposes, assign a test value directly
    print(factorize(num))
except:
    print("Invalid input in test environment.")