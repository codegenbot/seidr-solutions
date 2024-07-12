from more_itertools import intersperse

def format_numbers(numbers, delimiter):
    return intersperse(map(str, numbers), delimiter)

numbers = list(map(int, input("Enter numbers separated by space: ").split()))
delimiter = input("Enter delimiter: ")
result = delimiter.join(format_numbers(numbers, delimiter))
print(result)