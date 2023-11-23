from typing import List
import sys

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [x for num in numbers for x in (num, delimiter)][:-1]

numbers = list(map(int, sys.argv[1:-1]))
delimiter = int(sys.argv[-1])

output = intersperse(numbers, delimiter)
print(*output)