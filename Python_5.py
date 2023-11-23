from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [x for num in numbers for x in (num, delimiter)][:-1]

input_numbers = list(map(int, input().strip().split()))
input_delimiter = int(input())

output = intersperse(input_numbers, input_delimiter)
print(*output)