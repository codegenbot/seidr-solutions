from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set(numbers))

# Provide the required input list
input_numbers = [1, 2, 3, 3, 4, 5, 5, 6, 7, 8, 8, 9]
result = remove_duplicates(input_numbers)
print(result)