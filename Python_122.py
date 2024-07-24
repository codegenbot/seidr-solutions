from typing import List


def add_elements(arr: List[int], k: int):
    filtered_arr = [num for num in arr if 10 <= num <= 100]
    if not filtered_arr:
        return 0
    return sum(sorted(filtered_arr)[:k])