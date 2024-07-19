def factorize(n):
    factors = []
    for i in range(2, n+1):
        while n % i == 0:
            factors.append(i)
            n //= i
    return factors

print(factorize(int(input("Enter a number to factorize: ")))