import math

try:
    n = int(input("Enter a non-negative integer: ").strip())
    if n < 0:
        raise ValueError("Please enter a non-negative integer.")
    
    result = math.prod(map(int, str(n)))
    print(result)
    
except ValueError as e:
    print(e)