import math

try:
    num1, num2 = map(int, input().split())
    result = math.gcd(num1, num2)
    print(result)
except ValueError:
    print(1)