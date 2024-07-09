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
    print("Please enter an integer:")
    n = int(input().strip())
    if isinstance(n, int):
        result = factorize(n)
        print(result)
    else:
        print("Invalid input. Please enter an integer.")
except ValueError:
    print("Invalid input. Please enter an integer.")