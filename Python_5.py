from typing import List

def intersperse(numbers: List[int], delimiter: int) -> List[int]:
    return [x for pair in zip(numbers, [delimiter] * (len(numbers)-1)) for x in pair] + [numbers[-1]]

numbers_input = input("Enter a list of numbers (space-separated): ")
delimiter_input = int(input("Enter the delimiter: "))

numbers = list(map(int, numbers_input.strip().split()))

result = intersperse(numbers, delimiter_input)
print(result)