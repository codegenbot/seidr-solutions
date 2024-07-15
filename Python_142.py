from typing import List

def sum_squares(lst: List[int]) -> int:
    total = sum(num ** len(str(num)) for num in lst)
    return total