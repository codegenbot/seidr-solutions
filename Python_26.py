from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(dict.fromkeys(numbers))

input_numbers = [1, 2, 3, 2, 1]  # replace with your own list of numbers
result = remove_duplicates(input_numbers)
print(result)