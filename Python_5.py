from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for num in numbers:
        result.append(num)
        result.append(delimiter)
    result.pop()
    return result

numbers = list(map(int,input().split()))
delimiter = int(input())

output = intersperse(numbers, delimiter)
print(output)