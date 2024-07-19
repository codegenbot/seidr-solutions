def factorize(number):
    factors = []
    for i in range(1, int(number**0.5) + 1):
        if number % i == 0:
            factors.append(i)
            if i != number // i:
                factors.append(number // i)
    return sorted(factors)

print(factorize(int(input("Enter a number to factorize: ")))