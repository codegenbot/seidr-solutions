from typing import List
import sys


def intersperse() -> List[int]:
    numbers = list(map(int, sys.argv[1].strip().split()))
    delimiter = int(sys.argv[2])

    result = []
    for i in range(len(numbers)):
        result.append(numbers[i])
        if i < len(numbers) - 1:
            result.append(delimiter)

    return result


output = intersperse()
print(*output)