def factorize(n):
    factors = []
    for i in range(1, n + 1):
        if n % i == 0:
            factors.append(i)
    return factors

while True:
    try:
        n = int(input("Enter a positive integer: "))
        if n <= 0:
            raise ValueError("Input should be a positive integer")
        if n != int(n):
            raise ValueError("Input should be an integer")
        result = factorize(n)
        print(result)
        break
    except ValueError:
        print("Invalid input. Please enter a positive integer.")