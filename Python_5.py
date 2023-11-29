from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [x for pair in zip(numbers, [delimiter] * (len(numbers)-1)) for x in pair] + [numbers[-1]]

numbers = []
while True:
    try:
        num = int(input())
        numbers.append(num)
    except EOFError:
        break

delimiter = int(input())

result = intersperse(numbers, delimiter)
print(result)