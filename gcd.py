import math

user_input = input("Please enter two integers separated by a space: ")
if len(user_input.split()) != 2:
    print("Please enter two integers separated by a space.")
else:
    num1, num2 = map(int, user_input.split())
    result = math.gcd(num1, num2)
    print(result)