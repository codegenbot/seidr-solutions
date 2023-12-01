from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for i in range(len(numbers)):
        result.append(numbers[i])
        if i < len(numbers) - 1:
            result.append(delimiter)
    return result

# Read input from user
numbers_input = input()
delimiter_input = int(input())

# Parse input
numbers = list(map(int, numbers_input.split()))

# Call the function with the input values
output = intersperse(numbers, delimiter_input)

# Print the result
print(output)