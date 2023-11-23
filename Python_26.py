from typing import List

def remove_duplicates(numbers: List[int]) -> List[int]:
    return numbers

input_numbers = list(map(int, input().split()))
result = remove_duplicates(list(set(input_numbers)))
print(*result)