from more_itertools import intersperse

def format_numbers(numbers, delimiter):
    return [str(num) for num in numbers]

numbers = list(map(int, input("Enter numbers separated by space: ").split()))
delimiter = input("Enter delimiter: ")
result = delimiter.join(format_numbers(numbers, delimiter))
print(result)