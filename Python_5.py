from typing import List


def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for i in range(len(numbers)):
        result.append(numbers[i])
        if i < len(numbers) - 1:
            result.append(delimiter)
    return result
  
# Read input from user
numbers = list(map(int, input().split()))
delimiter = int(input())

# Call the function
result = intersperse(numbers, delimiter)

# Print the result
print(result)