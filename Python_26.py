from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    unique_numbers = set()
    duplicates = set()

    for num in numbers:
        if num in unique_numbers:
            duplicates.add(num)
        else:
            unique_numbers.add(num)

    return [num for num in numbers if num not in duplicates]