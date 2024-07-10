def check_numbers(numbers, threshold):
    result = [num for num in numbers if num % threshold == 0]
    return result

# Call the function with appropriate arguments
numbers = [5, 10, 15, 20]
threshold = 5
output = check_numbers(numbers, threshold)
print(output)