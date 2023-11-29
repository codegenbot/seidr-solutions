from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [
        x for pair in zip(numbers, [delimiter] * (len(numbers) - 1)) for x in pair
    ] + [numbers[-1]]

# Prompt for user input
numbers = list(map(int, input("Enter a list of numbers: ").split()))
delimiter = int(input("Enter a delimiter: "))

result = intersperse(numbers, delimiter)
print(result)