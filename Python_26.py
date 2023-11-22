from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set(numbers))


input_numbers = input().split()
input_numbers = list(map(int, input_numbers))
result = remove_duplicates(input_numbers)
print(result)