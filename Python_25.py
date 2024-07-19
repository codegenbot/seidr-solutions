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

while True:
    try:
        num = int(input("Enter a number to factorize: "))
        print(factorize(num))
        break
    except ValueError:
        print("Invalid input. Please enter a valid integer.")