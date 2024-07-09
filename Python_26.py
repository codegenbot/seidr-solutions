```python
from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    seen = set()
    result = []
    for num in sorted(numbers):
        if num not in seen:
            seen.add(num)
            result.append(num)
    return result

if __name__ == "__main__":
    print(remove_duplicates([1, 2, 3, 2, 4, 5]))
    print(remove_duplicates([4, 4, 4, 7, 8]))