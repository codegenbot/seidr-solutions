try:
    x, y = map(int, input("Enter two integers separated by a space, e.g., '5 10': ").strip().split())
    result = x * y
    print(result)
except ValueError:
    print("Invalid input. Please enter two integers separated by a space, e.g., '5 10'.")