from typing import List

def rolling_max(numbers: List[int]) -> List[int]:
    max_num = float("-inf")
    return [max_num := max(max_num, num) for num in numbers]

numbers = [int(input()) for _ in range(int(input()))]
result = rolling_max(numbers)
print(result)