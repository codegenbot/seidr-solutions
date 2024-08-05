def complete_code(numbers, delimeter):
    result = []
    for num in numbers:
        result.extend([num, delimeter])
    result.pop()
    return result

# Call the function with input values
# Example:
# numbers = [1, 2, 3]
# delimeter = '-'
# print(complete_code(numbers, delimeter))