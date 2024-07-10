```
from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(dict.fromkeys(numbers))


if __name__ == "__main__":
    numbers = [1, 2, 2, 3, 4, 4, 5]
    print(remove_duplicates(numbers))