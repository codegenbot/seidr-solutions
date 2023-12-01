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

# Call the function with the input
output = intersperse(numbers, delimiter)

# Print the output
print(output)