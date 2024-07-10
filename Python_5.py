def combine_with_delimeter(numbers, delimeter):
    result = []
    for i in range(len(numbers)):
        result.append(numbers[i])
        if i < len(numbers) - 1:
            result.append(delimeter)
    return result

# Call the function with input arguments to execute the code
numbers = [1, 2, 3, 4, 5]
delimeter = ","
output = combine_with_delimeter(numbers, delimeter)
print(output)