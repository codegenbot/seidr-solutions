import math

n = int(input("Enter a positive integer: "))
result = math.prod(map(int, str(n)))
print(result)