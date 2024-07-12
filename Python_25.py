def factorize(num):
    if num <= 0:
        return []
    factors = [i for i in range(1, num + 1) if num % i == 0]
    return factors


while True:
    try:
        n = int(input("Enter a positive integer to factorize: "))
        if n <= 0:
            raise ValueError("Invalid input")
    except ValueError as e:
        print(e)
    else:
        factors = factorize(n)
        print(factors)
        break