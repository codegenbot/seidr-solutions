from more_itertools import intersperse


def format_numbers(numbers, delimiter):
    return list(intersperse([str(num) for num in numbers], delimiter))


numbers = list(map(int, input("Enter numbers separated by space: ").split()))
delimiter = input("Enter delimiter: ")
result = "".join(format_numbers(numbers, delimiter))
print(result)