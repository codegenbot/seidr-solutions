def join_with_delimeter(numbers, delimeter):
    result = []
    for num in numbers:
        result.extend([num, delimeter])
    result.pop()
    return result

# Call the function with appropriate arguments
numbers = [1, 2, 3]
delimeter = ","
output = join_with_delimeter(numbers, delimeter)
print(output)