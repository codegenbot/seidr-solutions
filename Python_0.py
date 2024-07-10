def check_numbers(numbers, threshold):
    result = [num for num in numbers if num % threshold == 0]
    return result

numbers = [5, 10, 15, 20]
threshold = 5
output = check_numbers(numbers, threshold)
print(output)