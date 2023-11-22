from typing import List


def remove_duplicates(numbers: List[int]) -> List[int]:
    return list(dict.fromkeys(numbers))


def get_input_numbers() -> List[int]:
    # modify here
    multiline_input = """3,
    2,
    5,
    2"""
    return list(map(int, multiline_input.strip().split(",")))


input_numbers = get_input_numbers()
result = remove_duplicates(input_numbers)
print(result)