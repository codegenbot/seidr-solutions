import sys

numbers = list(map(int, sys.stdin.readline().strip().split()))
delimiter = int(sys.stdin.readline().strip())

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [x for num in numbers for x in (num, delimiter)][:-1]

output = intersperse(numbers, delimiter)
print(*output)