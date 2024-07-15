def factorize(n):
    factors = [i for i in range(1, n + 1) if n % i == 0]
    return factors

n = int(input("Enter a number: "))
result = factorize(n)
print(result)