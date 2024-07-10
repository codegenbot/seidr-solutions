# Fix to use input() directly and handle EOFError
try:
    a = int(input("Enter the first integer:"))
    b = int(input("Enter the second integer:"))
    print(a + b)
except (ValueError, EOFError):
    print("Invalid input. Please enter integers only.")