from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [x for pair in zip(numbers, [delimiter] * (len(numbers)-1)) for x in pair] + [numbers[-1]]

# Prompt user for input
numbers_input = input("Enter a list of numbers (space-separated): ")
delimiter_input = int(input("Enter the delimiter: "))

# Split input into a list of numbers
numbers = list(map(int, numbers_input.strip().split()))

# Call the function with correct inputs and return the result
result = intersperse(numbers, delimiter_input)
print(result)