```
def intersperse(numbers: list[int], delimiter: int) -> list[int]:
    if not isinstance(numbers, list):
        raise ValueError("Input 'numbers' must be a list")
    if not all(isinstance(num, int) for num in numbers):
        raise ValueError("All elements in the list 'numbers' must be integers")

    if not isinstance(delimiter, int):
        raise ValueError("Input 'delimiter' must be an integer")

    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([result[-1], delimiter, numbers[i]])
    if result and result[-1] == delimiter:
        result.pop()  # remove trailing delimiter
    return result

input_numbers = input("Enter a list of integers separated by commas: ")
try:
    numbers = [int(num) for num in input_numbers.split(",")]
except ValueError:
    print("Error: Invalid input for the list of numbers")
else:
    try:
        delimiter = int(input("Enter an integer to use as the delimiter: "))
    except ValueError:
        print("Error: Invalid input for delimiter")
    else:
        output = intersperse(numbers, delimiter)
        print(output)