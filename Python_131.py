import math

try:
    n = int(input("Enter a positive integer: ").strip())
    if n <= 0:
        raise ValueError("Please enter a positive integer greater than zero.")
    
    result = math.prod(map(int, str(n)))
    print(result)
    
except ValueError as e:
    print(e)