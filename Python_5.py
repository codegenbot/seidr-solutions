def intersperse(numbers: list[int], delimiter: int) -> list[int]:
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.extend([result[-1], delimiter, numbers[i]])
    if result and result[-1] == delimiter:
        result.pop()  # remove trailing delimiter
    return result

input_numbers = input("Enter a list of integers separated by commas: ")
numbers = [int(num) for num in input_numbers.split(",")]

try:
    delimiter = int(input("Enter an integer to use as the delimiter: "))
except ValueError:
    print("Error: Invalid input for delimiter")
else:
    output = intersperse(numbers, delimiter)
    print(output)

while True:
    try:
        delimiter = int(input("Enter an integer to use as the delimiter: "))
        break
    except ValueError:
        print("Error: Invalid input for delimiter. Please try again.")

output = intersperse(numbers, delimiter)
print(output)