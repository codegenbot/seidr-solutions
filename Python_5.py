```
from typing import List


def intersperse():
    numbers = input("Enter space-separated numbers: ").split()
    numbers = [int(num) for num in numbers]
    delimiter = int(input("Enter the delimiter: "))
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.append(delimiter)
        result.append(numbers[i])
    if len(numbers) > 2:
        result.insert(1, delimiter)
    return result

print(intersperse())