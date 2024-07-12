def add(x: int, y: int) -> int:
    return x + y

# Read input from the user
input_values = input().split()
x, y = map(int, input_values)

# Call the add() function and print the result
result = add(x, y)
print(result)