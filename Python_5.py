from more_itertools import intersperse

def format_numbers(numbers, delimiter):
    return [str(num) for num in numbers]

input_numbers = input("Enter numbers separated by spaces: ").strip().split()
numbers = [int(num) for num in input_numbers]
delimiter = input("Enter delimiter character: ")
result = intersperse(format_numbers(numbers, delimiter), delimiter)
print(result)