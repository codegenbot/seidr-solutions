from typing import List

def intersperse() -> List[int]:
    numbers = list(map(int, input().split()))
    delimiter = int(input())

    result = []
    for i in range(len(numbers)):
        result.append(numbers[i])
        if i < len(numbers) - 1:
            result.append(delimiter)
    
    return result