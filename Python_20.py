try:
    print("Enter 3 integers separated by spaces:")
    a, b, c = map(int, input().split())
    print(a + b + c)
except (ValueError, EOFError):
    print("Error: Invalid input. Please enter 3 integers separated by spaces.")