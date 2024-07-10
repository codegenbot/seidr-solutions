def complete_code(numbers, delimeter):
    result = []
    for num in numbers[:-1]:
        result.extend([num, delimeter])
    if numbers:
        result.append(numbers[-1])
    return result

# Call the function to execute the code
numbers = [1, 2, 3, 4, 5]
delimeter = ","
output = complete_code(numbers, delimeter)
print(output)