```
import math

n = float(input("Enter first number: "))
m = float(input("Enter second number: "))

def rounded_avg(n, m):
    avg = (n + m) / 2
    return str(math.ceil(avg))

print(math.ceil((n + m) / 2))