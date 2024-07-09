def factorize(n):
    factors = []
    for i in range(1, n + 1):
        if n % i == 0:
            factors.append(i)
    return factors

try:
    print("Please enter an integer:")
    n = int(input().strip())
    if isinstance(n, int):
        result = factorize(n)
        print(result)
    else:
        print("Invalid input. Please enter an integer.")
except ValueError:
    print("Invalid input. Please enter an integer.")