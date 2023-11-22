from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(dict.fromkeys(numbers))


input_numbers = list(map(int, input().split(","))) if input() != "" else []
result = remove_duplicates(input_numbers)
print(result)