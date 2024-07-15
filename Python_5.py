def add_delimiter(numbers, delimiter):
    result = []
    for num in numbers:
        result.extend([num, delimiter])
    result.pop()
    return result

# Call the function with appropriate arguments
numbers = [1, 2, 3, 4]
delimiter = ","
output = add_delimiter(numbers, delimiter)
print(output)