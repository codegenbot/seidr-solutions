def concatenate_with_delimeter(numbers, delimeter):
    result = []
    for num in numbers:
        result.extend([num, delimeter])
    result.pop()
    return result

# Call the function with the necessary inputs
numbers = [1, 2, 3, 4]
delimeter = "-"
output = concatenate_with_delimeter(numbers, delimeter)
print(output)