from sys import argv
from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set(numbers))


input_numbers = list(map(int, argv[1:]))
result = remove_duplicates(input_numbers)
print(result)