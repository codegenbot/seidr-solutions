# Define the rolling_max function that takes a list of numbers
def rolling_max(numbers):
    return [max(numbers[i:i+3]) for i in range(len(numbers)-2)]

# Read input from user
n = int(input().strip())
numbers = [int(input()) for _ in range(n)]

# Call the function and print the output
print(rolling_max(numbers))