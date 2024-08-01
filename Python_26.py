from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return [num for num in set(numbers) if numbers.count(num) == 1]

# Test the function with sample input
sample_input = [1, 2, 2, 3, 4, 4, 5]
print(remove_duplicates(sample_input))