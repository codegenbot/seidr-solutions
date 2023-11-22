from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(set(numbers))

input_string = "1 2 3 3 4 5 5 6"
input_numbers = list(map(int, input_string.split()))
result = remove_duplicates(input_numbers)
print(result)