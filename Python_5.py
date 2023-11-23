from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [x for num in numbers for x in (num, delimiter)][:-1]

numbers = list(map(int, input("Enter numbers separated by spaces: ").strip().split()))
delimiter = int(input("Enter the delimiter value: ").strip())

output = intersperse(numbers, delimiter)
print(*output)