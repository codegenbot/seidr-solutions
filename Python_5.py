def merge_with_delimeter(numbers, delimeter):
    result = []
    for i in range(len(numbers)):
        result.append(numbers[i])
        if i < len(numbers) - 1:
            result.append(delimeter)
    return result

numbers = [1, 2, 3, 4, 5]
delimeter = '-'
output = merge_with_delimeter(numbers, delimeter)
print(output)