def factorize(n):
    factors = []
    divisor = 2

    while n > 1:
        while n % divisor == 0:
            factors.append(divisor)
            n = n / divisor
        divisor += 1

    return factors

print(factorize(int(input("Enter a number to factorize: "))) )