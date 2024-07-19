import math

try:
    n = int(input("Enter a positive integer: "))
    result = math.prod(map(int, str(abs(n))))
    print(result)
except ValueError:
    print("Invalid input. Please enter a valid positive integer.")