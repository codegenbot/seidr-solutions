def find_zero(a: int, b: int, c: int):
    if c == 0:
        return -b / (2 * a)
    else:
        return -b / (2 * c)

# Read input from the user
a, b, c = map(int, input().split())

# Call the find_zero function with input integers
result = find_zero(a, b, c)

# Print the output
print(result)