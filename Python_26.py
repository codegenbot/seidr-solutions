from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    unique_numbers = list(set(numbers))
    unique_numbers.sort()
    return unique_numbers

numbers = input().split()
numbers = [int(num) for num in numbers]

result = remove_duplicates(numbers)

print(result)