def add_delimiters(numbers, delimiter):
    result = []
    for num in numbers:
        result.extend([num, delimiter])
    result.pop()
    return result

# Call the function with the given input arguments
numbers = [1, 2, 3, 4, 5]
delimiter = '-'
output = add_delimiters(numbers, delimiter)
print(output)