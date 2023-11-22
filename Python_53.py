def add(x: int, y: int):
    return x + y


# Option 1: Expect inputs to be provided in a single line separated by a space
x, y = map(int, input("Please enter two numbers separated by a space: ").split())

# Option 2: Prompt the user to enter each number individually
# x = int(input("Please enter the first number: "))
# y = int(input("Please enter the second number: "))

result = add(x, y)
print(result)