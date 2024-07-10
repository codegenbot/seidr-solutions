try:
    print("Enter two integers separated by a space:")
    a, b = map(int, input().split())
    result = a + b
    print(result)
except ValueError:
    print("Invalid input. Please enter two integers separated by a space.")