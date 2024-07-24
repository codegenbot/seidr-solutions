import math

while True:
    try:
        num1, num2 = map(int, input("Please enter two integers separated by a space: ").split())
        break
    except ValueError:
        print("Please enter two integers separated by a space.")

result = math.gcd(num1, num2)
print(result)