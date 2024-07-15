def add_delimiter(numbers, delimiter):
    result = []
    for num in numbers:
        result.extend([num, delimiter])
    result.pop()
    return result

numbers = [1, 2, 3, 4]
delimiter = ","
output = add_delimiter(numbers, delimiter)
print(output)