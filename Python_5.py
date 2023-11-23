import sys
from typing import List


def intersperse() -> List[int]:
    numbers = list(map(int, sys.stdin.readline().strip().split()))
    delimiter = int(sys.stdin.readline().strip())

    result = []
    for i in range(len(numbers)):
        result.append(numbers[i])
        if i < len(numbers) - 1:
            result.append(delimiter)
    
    return result

output = intersperse()
print(*output)