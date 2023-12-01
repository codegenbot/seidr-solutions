from typing import List


def rolling_max(numbers: List[int]) -> List[int]:
    rolling_max_list = []
    max_num = float("-inf")
    for num in numbers:
        max_num = max(max_num, num)
        rolling_max_list.append(max_num)
    return rolling_max_list


size = int(input())
numbers = []
for _ in range(size):
    numbers.append(int(input()))

result = rolling_max(numbers)
print(result)