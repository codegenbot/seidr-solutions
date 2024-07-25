def factorize(n):
    factors = []
    for i in range(1, n + 1):
        if n % i == 0:
            factors.append(i)
    return factors

try:
    n = int(input("Enter a number: "))
    if n <= 0:
        print("Please enter a positive integer.")
    else:
        print(factorize(n))
except ValueError:
    print("Please enter a valid integer.")