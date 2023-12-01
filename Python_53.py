def add(x: int, y: int):
    return x + y

# Read input from user
input_str = input()

# Split the input into two integers
a, b = map(int, input_str.split())

# Call the add function with the input integers
result = add(a, b)

# Print the result
print(result)