from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    duplicates = set()
    unique_numbers = []
    for num in numbers:
        if num not in duplicates:
            if numbers.count(num) == 1:
                unique_numbers.append(num)
            else:
                duplicates.add(num)
    return unique_numbers