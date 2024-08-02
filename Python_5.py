def intersperse(numbers, delimiter):
    result = []
    for i in range(len(numbers)):
        result.append(numbers[i])
        if i < len(numbers) - 1:
            result.append(delimiter)
    return result

# Example usage:
numbers = [1, 2, 3, 4, 5]
delimiter = ","
output = intersperse(numbers, delimiter)
print(output)