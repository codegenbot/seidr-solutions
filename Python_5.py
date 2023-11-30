from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    result = []
    for i in range(len(numbers)):
        if i > 0:
            result.append(delimiter)
        result.append(numbers[i])
    return result

# Read input from user
input_numbers = input().split()
input_numbers = [int(number) for number in input_numbers]
input_delimiter = int(input())

# Call the function with the input
output = intersperse(input_numbers, input_delimiter)
print(output)