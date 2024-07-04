from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [val for pair in zip(numbers, [delimiter] * len(numbers)) for val in pair][:-1] if numbers else []

numbers = list(map(int, input().split()))
delimiter = int(input())

print(intersperse(numbers, delimiter))