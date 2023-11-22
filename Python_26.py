from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set(numbers))


input_numbers = [int(x) for x in input().split()]
result = remove_duplicates(input_numbers)
print(result)