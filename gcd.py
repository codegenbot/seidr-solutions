import math

while True:
    user_input = input("Please enter two integers separated by a space: ")
    if len(user_input.split()) == 2:
        num1, num2 = map(int, user_input.split())
        break

result = math.gcd(num1, num2)
print(result)