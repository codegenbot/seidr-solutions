def process_numbers(numbers, delimiter):
    result = []
    for num in numbers:
        result.extend([num, delimiter])
    result.pop() if result else None
    return result

# Call the function with the required input
numbers = [1, 2, 3]
delimiter = ','
output = process_numbers(numbers, delimiter)
print(output)