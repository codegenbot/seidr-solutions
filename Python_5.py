def check(numbers, delimiter):
    result = []
    for i in range(len(numbers)):
        result.append(numbers[i])
        if i < len(numbers) - 1:
            result.append(delimiter)
    return result

numbers = [1, 2, 3, 4, 5]
delimiter = ","
output = check(numbers, delimiter)
print(output)