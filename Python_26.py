from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set(numbers))


input_numbers = [1, 2, 2, 3, 4, 4, 5]
result = remove_duplicates(input_numbers)
print(result)