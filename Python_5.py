from more_itertools import intersperse

def format_numbers(numbers, delimiter):
    return [str(num) for num in numbers]

numbers = [1, 2, 3, 4, 5]
delimiter = ","
result = "".join(intersperse(format_numbers(numbers, delimiter), delimiter))
print(result)