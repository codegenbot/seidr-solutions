def add(x: int, y: int) -> int:
    return x + y

# Read two integers from the user
x = int(input("Enter the first integer: "))
y = int(input("Enter the second integer: "))

# Calculate and print the sum
result = add(x, y)
print("Sum:", result)