def process_numbers(numbers, delimeter):
    result = []
    for num in numbers[:-1]:
        result.extend([num, delimeter])
    if numbers:
        result.append(numbers[-1])
    return result


# Call the function with appropriate arguments
numbers = [1, 2, 3, 4]
delimeter = ","
output = process_numbers(numbers, delimeter)
print(output)