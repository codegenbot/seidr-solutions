try:
    print("Enter the first integer:")
    a = int(input())
    print("Enter the second integer:")
    b = int(input())
    result = a + b
    print(result)
except ValueError:
    print("Invalid input. Please enter integers only.")