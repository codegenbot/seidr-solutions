def intersperse(numbers: list[int], delimiter: str) -> list[str]:
    if len(numbers) == 0:
        return []

    result = [str(delimiter)]
    for i in range(len(numbers)):
        result.extend([str(numbers[i]), str(delimiter)])
    if result[-1] == str(delimiter):
        result.pop()

    numbers_input = input("Enter a space-separated list of integers: ")
    numbers_input = numbers_input.strip()
    numbers = [int(i) for i in numbers_input.split()]
    delimiter = input("Enter the delimiter: ")

    output = intersperse(numbers, delimiter)

    return output


print(intersperse([], ""))