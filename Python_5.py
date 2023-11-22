from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for i in range(len(numbers)-1):
        result.append(numbers[i])
        result.append(delimiter)
    result.append(numbers[-1])
    return result

numbers = [1, 2, 3, 4]
delimiter = 0
output = intersperse(numbers, delimiter)
print(output)