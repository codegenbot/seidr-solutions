# Read input line by line until an empty line is encountered and store it in a list of integers
numbers = []
while True:
    try:
        num = input()
        if num == "":
            break
        numbers.append(int(num))
    except EOFError:
        break

# Define the rolling_max function
def rolling_max(numbers):
    return [max(numbers[i : i + 3]) for i in range(len(numbers) - 2]

print(rolling_max(numbers))