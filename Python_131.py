import math

try:
    n = int(input("Enter a positive integer greater than zero: "))
    if n <= 0:
        print("Please enter a positive integer greater than zero.")
    else:
        result = math.prod(map(int, str(n)))
        print(result)
except ValueError:
    print("Invalid input. Please enter a positive integer greater than zero.")