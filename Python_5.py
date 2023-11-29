from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [x for pair in zip(numbers, [delimiter] * (len(numbers)-1)) for x in pair] + [numbers[-1]]

# Read input from user
numbers = list(map(int, input("Enter the numbers: ").split()))
delimiter = int(input("Enter the delimiter: "))

# Call the intersperse function and print the result
result = intersperse(numbers, delimiter)
print(result)