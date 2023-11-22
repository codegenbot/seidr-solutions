from typing import List


def intersperse() -> List[int]:
    input_list = input("Enter the list of numbers: ").split()
    numbers = [int(num) for num in input_list]
    delimiter = int(input("Enter the delimiter: "))

    interspersed = []
    for i in range(len(numbers)):
        interspersed.append(numbers[i])
        if i < len(numbers) - 1:
            interspersed.append(delimiter)

    return interspersed


result = intersperse()
print(result)