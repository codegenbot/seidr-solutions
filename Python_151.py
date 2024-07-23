```
def double_the_difference(a, b):
    return sum(i**2 for i in [a, b] if isinstance(i, int) and i % 2 != 0)

user_input_a = int(input("Enter first number: "))
user_input_b = int(input("Enter second number: "))

result = double_the_difference(user_input_a, user_input_b)
print(result)