from typing import List

numbers = list(map(int, input().split()))
delimiter = int(input())

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [
        x for pair in zip(numbers, [delimiter] * (len(numbers) - 1)) for x in pair
    ] + [numbers[-1]]

output = intersperse(numbers, delimiter)
print(*output)