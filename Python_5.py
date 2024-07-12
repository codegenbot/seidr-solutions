from more_itertools import intersperse


def format_numbers(numbers, delimiter):
    return [str(num) for num in numbers]


try:
    numbers = list(map(int, input("Enter numbers separated by space: ").split()))
    delimiter = input("Enter delimiter: ")
except ValueError:
    print(
        "Invalid input format. Please provide numbers separated by space and a delimiter."
    )
else:
    result = delimiter.join(format_numbers(numbers, delimiter))
    print(result)