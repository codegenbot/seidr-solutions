def factorize(n):
    factors = []
    i = 2
    while i * i <= n:
        if n % i == 0:
            n //= i
            factors.append(i)
        else:
            i += 1
    if n > 1:
        factors.append(n)
    return factors


try:
    n = int(input().strip())
    print(factorize(n))
except ValueError:
    print("Please enter a valid integer.")