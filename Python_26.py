from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set(numbers))

input_numbers = [int(input()) for _ in range(int(input()))]
result = remove_duplicates(input_numbers)
print(result)