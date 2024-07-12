from more_itertools import intersperse

def format_numbers(numbers, delimiter):
    return [str(num) for num in numbers]

numbers = [int(x) for x in input("Enter numbers separated by spaces: ").split()]
delimiter = input("Enter delimiter character: ")
result = delimiter.join(intersperse(format_numbers(numbers, delimiter)))
print(result)