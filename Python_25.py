def factorize(n):
    factors = []
    for i in range(1, n + 1):
        if n % i == 0:
            factors.append(i)
    return factors

try:
    n = int(input("Enter a positive integer: "))
except ValueError:
    print("Input should be a positive integer")
else:
    if n <= 0:
        print("Input should be a positive integer")
    else:
        result = factorize(n)
        print(result)