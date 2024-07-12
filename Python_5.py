def concatenate_numbers(numbers, delimiter):
    result = []
    for num in numbers[:-1]:
        result.extend([num, delimiter])
    if numbers:
        result.append(numbers[-1])
    return result

# Call the function
numbers = [1, 2, 3, 4, 5]
delimiter = "-"
output = concatenate_numbers(numbers, delimiter)
print(output)