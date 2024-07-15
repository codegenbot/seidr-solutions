def intersperse(numbers: list[int], delimiter: str) -> list[str]:
    if len(numbers) == 0:
        return []

    result = [str(delimiter)]
    for i in range(len(numbers)):
        result.extend([str(numbers[i]), str(delimiter)])
    if result[-1] == str(delimiter):
        result.pop()

    numbers_input = input("Enter the list of numbers (space-separated): ")
    delimiter_input = input("Enter the delimiter: ")

    numbers = [int(i) for i in numbers_input.split()]
    delimiter = str(delimiter_input)

    output = intersperse(numbers, delimiter)

    return output


print(intersperse([], ""))