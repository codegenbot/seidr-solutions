from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set(numbers))

numbers = list(map(int, input().split()))
output = remove_duplicates(numbers)
print(output)