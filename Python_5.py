def add_delimiters(numbers, delimiter):
    result = []
    for num in numbers:
        result.extend([num, delimiter])
    result.pop()
    return result

numbers = [1, 2, 3, 4, 5]
delimiter = '-'
output = add_delimiters(numbers, delimiter)
print(output)