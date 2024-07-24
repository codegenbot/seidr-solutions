import math

try:
    num1, num2 = map(int, input("Please enter two integers separated by a space: ").split())
    result = math.gcd(num1, num2)
    print(result)
except ValueError:
    print("Please enter two integers separated by a space.")