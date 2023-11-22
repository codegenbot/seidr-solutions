from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set(numbers))

input_numbers = [3, 4, 5, 5, 6, 7, 7]
result = remove_duplicates(input_numbers)
print(result)