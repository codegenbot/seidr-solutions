def modify_list(numbers, delimiter):
    result = []
    for num in numbers:
        result.extend([num, delimiter])
    result.pop()
    return result

# Call the function with appropriate arguments
numbers = [1, 2, 3, 4, 5]
delimiter = ","
output = modify_list(numbers, delimiter)
print(output)