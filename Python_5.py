def complete_code(numbers, delimeter):
    result = []
    for num in numbers:
        result.extend([num, delimeter])
    result.pop()
    return result

# Call the function with appropriate arguments
output = complete_code([1, 2, 3], '-')