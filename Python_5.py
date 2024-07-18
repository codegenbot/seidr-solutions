def process_numbers(numbers, delimiter):
    result = []
    for num in numbers:
        result.extend([num, delimiter])
    result.pop()
    return result

# Call the function with appropriate arguments
numbers = [1, 2, 3]
delimiter = '_'
output = process_numbers(numbers, delimiter)
print(output)