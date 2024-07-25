def factorize(n):
    factors = []
    for i in range(1, n + 1):
        if n % i == 0:
            factors.append(i)
    return factors

n = int(input("Enter a number: "))
if n > 0:
    print(factorize(n))
else:
    print("Please enter a positive integer.")