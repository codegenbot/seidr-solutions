def format_numbers(numbers, delimiter):
    result = []
    for num in numbers[:-1]:
        result.extend([num, delimiter])
    if numbers:
        result.append(numbers[-1])
    return result

# Test the function
numbers = [1, 2, 3, 4, 5]
delimiter = ','
output = format_numbers(numbers, delimiter)
print(output)