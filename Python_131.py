def calculate_factorial(n):
    if n <= 0:
        raise ValueError("Invalid input. Please enter a positive integer greater than zero.")
    return reduce(lambda x, y: x * y, range(1, n+1), 1)

try:
    n = int(input("Enter a positive integer greater than zero: "))
    print(calculate_factorial(n))
except ValueError as e:
    print(e)