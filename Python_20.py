try:
    a, b, c = map(int, input().split())
    print(a + b + c)
except ValueError:
    print("Error: Invalid input. Please enter 3 integers separated by spaces.")