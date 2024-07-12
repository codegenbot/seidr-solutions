# Read input from user
n = int(input().strip())
numbers = [int(input()) for _ in range(n)]

# Call the function and print the output
print(rolling_max(numbers))