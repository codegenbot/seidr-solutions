def process_numbers(numbers, delimiter):
    result = []
    for num in numbers:
        result.extend([num, delimiter])
    result.pop()
    return result

# Call the function with appropriate input
numbers = [1, 2, 3, 4]
delimiter = '-'
output = process_numbers(numbers, delimiter)
print(output)