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

n = int(input("Enter a number: "))
if n > 0:
    print(factorize(n))
else:
    print("Please enter a positive integer.")