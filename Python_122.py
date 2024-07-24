from typing import Union

def add_elements(arr: list[Union[int, float]], k: int) -> int:
    sorted_nums = sorted([num for num in arr if 10 <= num <= 100], reverse=True)
    return sum(sorted_nums[:k])