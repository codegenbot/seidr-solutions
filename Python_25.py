try:
    n = int(input("Enter a positive integer: "))
    if n <= 0:
        raise ValueError("Input should be a positive integer")
except ValueError:
    print("Invalid input. Please enter a positive integer.")
else:
    result = factorize(n)
    print(result)