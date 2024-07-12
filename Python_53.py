try:
    x = int(raw_input("Enter the first integer: "))
    y = int(raw_input("Enter the second integer: "))
    result = multiply_two_numbers(x, y)
    print("Result of multiplication:", result)
except ValueError:
    print("Invalid input. Please enter integers only.")