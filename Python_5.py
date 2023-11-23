from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [x for num in numbers for x in (num, delimiter)][:-1]

input_str = input()
numbers = list(map(int, input_str.split()))

delimiter = int(input())

output = intersperse(numbers, delimiter)
print(*output)