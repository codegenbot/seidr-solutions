from typing import list


def intersperse():
    numbers = [int(x) for x in input("Enter numbers separated by space: ").split()]
    delimiter = int(input("Enter the delimiter: "))
    result = [numbers[0]]

    for i in range(1, len(numbers)):
        result.append(delimiter)
        result.append(numbers[i])

    if len(numbers) > 2:
        result.insert(0, delimiter)
    return result


print(intersperse())