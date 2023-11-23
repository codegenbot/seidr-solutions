from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [x for num in numbers for x in (num, delimiter)][:-1]

numbers = list(map(int, input("Enter numbers separated by space: ").split()))
delimiter = int(input("Enter delimiter: ").strip())

output = intersperse(numbers, delimiter)
print(*output)