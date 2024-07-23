```
from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    if len(numbers) == 1:
        return [numbers[0]]
    result = [numbers[0]]
    for i in range(1, len(numbers)):
        result.append(delimiter)
        result.append(numbers[i])
    if len(numbers) > 2:
        result.insert(1, delimiter)
    return result

num_str = input("Enter a list of numbers (space-separated): ")
delimit = int(input("Enter the delimiter: "))

numbers = [int(num) for num in num_str.split()]

result = intersperse(numbers, delimit)

print(result)