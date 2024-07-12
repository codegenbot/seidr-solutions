def format_numbers(numbers, delimiter):
    return [item for sublist in [[num, delimiter] for num in numbers] for item in sublist][:-1]

numbers = [1, 2, 3, 4, 5]
delimiter = ","
result = format_numbers(numbers, delimiter)
print(result)