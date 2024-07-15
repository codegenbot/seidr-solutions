def add_delimiter(numbers, delimiter):
    return [str(num) + delimiter for num in numbers[:-1]] + [str(numbers[-1])]


numbers = [1, 2, 3, 4]
delimiter = ","
output = add_delimiter(numbers, delimiter)
print(output)