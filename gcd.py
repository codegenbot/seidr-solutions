import math

user_input = input("Please enter two integers separated by a space: ")
split_input = user_input.split()

try:
    if len(split_input) != 2:
        raise ValueError("Please enter exactly two integers separated by a space.")

    num1, num2 = map(int, split_input)
    result = math.gcd(num1, num2)
    print(result)

except ValueError as e:
    print(e)