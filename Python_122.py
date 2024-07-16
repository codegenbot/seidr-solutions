from typing import List


def add_elements(arr: List[int], k: int = 0) -> int:
    filtered_nums = [num for num in arr if 10 <= num <= 100]
    sorted_filtered_nums = sorted(filtered_nums, reverse=True)

    if not sorted_filtered_nums:
        return 0

    return sum(sorted_filtered_nums[:k])