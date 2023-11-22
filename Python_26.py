from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(dict.fromkeys(numbers))

numbers = list(map(int, input().split()))
result = remove_duplicates(numbers)
print(*result)