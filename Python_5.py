from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for i in range(len(numbers)):
        result.append(numbers[i])
        result.append(delimiter)
    return result[:-1]

input_numbers = list(map(int, input().split()))
input_delimiter = int(input())

output = intersperse(input_numbers, input_delimiter)

print(output)