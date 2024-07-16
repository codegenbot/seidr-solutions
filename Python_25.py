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
    n = int(input("Enter a positive integer: "))
    if n > 0:
        print(factorize(n))
    else:
        print("Please enter a positive integer.")
except ValueError:
    print("Please enter a valid integer value.")