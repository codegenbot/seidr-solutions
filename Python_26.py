from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    num_counts = {num: numbers.count(num) for num in numbers}
    return [num for num in numbers if num_counts[num] == 1]