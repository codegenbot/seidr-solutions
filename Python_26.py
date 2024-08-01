from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return [num for num in set(numbers) if numbers.count(num) == 1]

# Test the function with sample input
numbers_input = list(map(int, input().split()))
print(remove_duplicates(numbers_input))