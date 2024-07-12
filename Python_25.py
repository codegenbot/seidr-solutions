def factorize(num):
    if num <= 0:
        return []
    factors = [i for i in range(1, num + 1) if num % i == 0]
    return factors


while True:
    try:
        n = int(input("Enter a positive integer: "))
        factors = factorize(n)
        print(factors)
    except ValueError:
        print("\nInvalid input. Please enter a positive integer.")