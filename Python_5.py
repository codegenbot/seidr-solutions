def complete_code(numbers, delimiter):
    result = []
    for num in numbers:
        result.extend([num, delimiter])
    result.pop()
    return result

numbers = [1, 2, 3]
delimiter = ','
output = complete_code(numbers, delimiter)
print(output)