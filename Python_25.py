from typing import List


def find_max_value_in_array(arr: List[int]) -> int:
    max_val = arr[0]
    for i in range(1, len(arr)):
        if arr[i] > max_val:
            max_val = arr[i]
    return max_val