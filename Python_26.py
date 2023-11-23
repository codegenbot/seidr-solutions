from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(dict.fromkeys(numbers))

# Test case
numbers = [1, 2, 2, 3, 4, 4, 5]
remove_duplicates(numbers)