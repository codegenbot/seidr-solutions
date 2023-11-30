from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for i in range(len(numbers)):
        if i > 0:
            result.append(delimiter)
        result.append(numbers[i])
    return result

# Read input
numbers = list(map(int, input().split()))
delimiter = int(input())

# Call the function and print the result
result = intersperse(numbers, delimiter)
print(result)