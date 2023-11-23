from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(dict.fromkeys(numbers))


# Read input from user
numbers = list(map(int, input("Enter space-separated numbers: ").split()))
result = remove_duplicates(numbers)
print(*result)