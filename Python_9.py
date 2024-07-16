from typing import List

def rolling_max(n: int) -> List[int]:
    numbers = [int(input()) for _ in range(n)]
    max_numbers = []
    max_num = float("-inf")
    for num in numbers:
        max_num = max(max_num, num)
        max_numbers.append(max_num)
    return max_numbers

n = int(input())
result = rolling_max(n)
print(result)