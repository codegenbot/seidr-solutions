def format_numbers(numbers, delimiter):
    return [str(num) for num in numbers]

numbers = [1, 2, 3, 4, 5]
delimiter = ","
result = delimiter.join(format_numbers(numbers, delimiter))
print(result)