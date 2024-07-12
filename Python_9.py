from typing import List

def rolling_max() -> List[int]:
    numbers = list(map(int, input("Enter a list of numbers separated by spaces: ").split()))
    result = []
    max_num = float("-inf")
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result

print(rolling_max())