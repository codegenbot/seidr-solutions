from typing import List

def add_elements(arr: List[int], k: int) -> int:
    sorted_nums = sorted([num for num in arr if 10 <= num < 100], reverse=True)
    return sum(sorted_nums) if len(sorted_nums) <= k else sum(sorted_nums[:k])