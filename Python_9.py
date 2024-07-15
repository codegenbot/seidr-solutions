from typing import List

def rolling_max() -> List[int]:
    numbers = list(map(int, input().split()))
    max_numbers = []
    max_num = float("-inf")
    for num in numbers:
        max_num = max(max_num, num)
        max_numbers.append(max_num)
    return max_numbers

result = rolling_max()
print(result)