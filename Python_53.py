
def add(x: int, y: int):
    return x + y

# Prompt user for two numbers
print("Enter two integers separated by a space:")
num1, num2 = map(int, input().split())

# Call the `add` function with the input numbers
result = add(num1, num2)

# Print the result
print(f"The sum of {num1} and {num2} is: {result}")