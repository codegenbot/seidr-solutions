def factorize(n):
    factors = []
    for i in range(1, n + 1):
        if n % i == 0:
            factors.append(i)
    return factors

while True:
    try:
        n = int(input("Enter a positive integer: "))
        if n > 0:
            break
        else:
            print("Please enter a positive integer.")
    except ValueError:
        print("Please enter a valid positive integer.")

result = factorize(n)
print(result)