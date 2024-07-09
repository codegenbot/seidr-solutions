try:
    x, y = map(int, input("Enter two integers separated by space: ").strip().split())
except ValueError:
    print("Invalid input. Please enter two valid integers separated by space.")
    exit()

# Existing code to calculate and print the result
result = add(x, y)
print(result)