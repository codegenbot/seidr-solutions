def add(x: int, y: int):
    return x + y

# Read input from user
input_str = input("Enter two integers separated by a space: ")
x, y = map(int, input_str.split())

# Call the add function with input values
result = add(x, y)

print(result)