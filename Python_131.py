import math

n = int(input().strip())
if n <= 0:
    print("Invalid input. Please enter a valid positive integer greater than zero.")
else:
    result = math.prod(map(int, str(abs(n))))
    print(result)