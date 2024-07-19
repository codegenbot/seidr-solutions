from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    max_num = float("-inf")
    return [max_num := max(max_num, num) for num in numbers]

numbers = list(map(int, input().split()))
result = rolling_max(numbers)
result