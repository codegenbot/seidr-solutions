from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set(numbers))

n = int(input())
input_numbers = [int(input()) for _ in range(n)]
result = remove_duplicates(input_numbers)
print(result)