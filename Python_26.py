from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    unique_nums = set()
    duplicates = set()

    for num in numbers:
        if num in unique_nums:
            duplicates.add(num)
        else:
            unique_nums.add(num)

    return [num for num in numbers if num not in duplicates]