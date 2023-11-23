from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [x for num in numbers for x in (num, delimiter)][:-1]

numbers = [int(n) for n in input("Enter numbers separated by space: ").split()]
delimiter = int(input("Enter delimiter: "))

output = intersperse(numbers, delimiter)
print(*output)