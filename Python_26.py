```
from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    result = []
    for num in map(int, numbers):
        if str(num) not in seen:
            seen.add(str(num))
            result.append(num)
    return result


numbers = list(map(int, input("Enter numbers separated by commas: ").split(',')))
print(remove_duplicates(numbers))