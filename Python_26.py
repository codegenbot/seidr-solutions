from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set(numbers))


input_numbers = input().split()
result = remove_duplicates(list(map(int, input_numbers)))
print(result)