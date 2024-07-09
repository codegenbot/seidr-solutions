# Read input line by line and store it in a list of integers
numbers = [int(line) for line in iter(input, "")]


# Define the rolling_max function
def rolling_max(numbers):
    return [max(numbers[i : i + 3]) for i in range(len(numbers) - 2)]


print(rolling_max(numbers))