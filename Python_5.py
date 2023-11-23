from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [x for num in numbers for x in (num, delimiter)][:-1]

numbers = [int(x) for x in input("Enter numbers (space-separated): ").split()]
delimiter = int(input("Enter delimiter: ").strip())

output = intersperse(numbers, delimiter)
print(*output)