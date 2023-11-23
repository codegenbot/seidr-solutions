import sys

numbers = list(map(int, input().strip().split()))
delimiter = int(input().strip())

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [x for num in numbers for x in (num, delimiter)][:-1]

output = intersperse(numbers, delimiter)
print(*output)