def join_numbers_with_delimiter(numbers, delimiter):
    result = []
    for num in numbers:
        result.extend([num, delimiter])
    result.pop() if result else None
    return result

numbers = [1, 2, 3, 4, 5]
delimiter = ","
output = join_numbers_with_delimiter(numbers, delimiter)
print(output)