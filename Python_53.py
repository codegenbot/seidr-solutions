def multiply_two_numbers(x, y):
    return x * y

while True:
    try:
        x = int(input("Enter the first integer: "))
        y = int(input("Enter the second integer: "))
        break
    except ValueError:
        print("Invalid input. Please enter integers only.")

result = multiply_two_numbers(x, y)
print("Result of multiplication:", result)