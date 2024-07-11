def join_numbers_with_delimiter(numbers, delimiter):
    result = []
    for num in numbers:
        result.extend([num, delimiter])
    result.pop()
    return result

numbers = [1, 2, 3, 4]
delimiter = "-"
print(join_numbers_with_delimiter(numbers, delimiter))