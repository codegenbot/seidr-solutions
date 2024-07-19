import math

try:
    n = int(input())
    result = math.prod(map(int, str(n)))
    print(result)
except:
    print("Invalid input")