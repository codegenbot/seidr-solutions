def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

# Accepting input from the user
numbers = list(map(int, input("Enter numbers separated by spaces: ").split()))
threshold = int(input("Enter the threshold value: "))

# Calling the check_numbers function with the correct arguments
result = check_numbers(numbers, threshold)

# Returning the result
print(result)