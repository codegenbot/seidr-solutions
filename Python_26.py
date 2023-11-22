from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(dict.fromkeys(numbers))


def get_input_numbers() -> List[int]:
    return list(map(int, input().split()))


input_numbers = get_input_numbers()
result = remove_duplicates(input_numbers)
print(result)