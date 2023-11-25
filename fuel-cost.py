from typing import List

def fuel_cost(arr: List[int]) -> int:
    return sum((num // 3) - 2 for num in arr)