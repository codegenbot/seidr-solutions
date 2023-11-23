from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set(numbers))

n = int(input())
input_numbers = list(map(int, input().split()))
result = remove_duplicates(input_numbers)
print(result)