```
from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    result = []
    for num in sorted(numbers):
        if num not in seen:
            seen.add(num)
            result.append(num)
    return result

numbers = input("Enter a list of integers (comma separated): ")
numbers = [int(x) for x in numbers.split(",")]
print(remove_duplicates(numbers))