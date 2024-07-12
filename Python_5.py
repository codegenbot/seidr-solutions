def format_numbers(numbers, delimiter):
    return [str(num) for num in numbers]

def intersperse(numbers, delimiter):
    return delimiter.join(format_numbers(numbers, delimiter))

numbers = [1, 2, 3, 4, 5]
delimiter = ","
result = intersperse(numbers, delimiter)
print(result)