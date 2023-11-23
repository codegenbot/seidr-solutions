from typing import List


def sort_numbers(numbers_list: List[str]) -> str:
    number_mapping = {
        "zero": 0,
        "one": 1,
        "two": 2,
        "three": 3,
        "four": 4,
        "five": 5,
        "six": 6,
        "seven": 7,
        "eight": 8,
        "nine": 9,
    }

    sorted_numbers = sorted(
        numbers_list, key=lambda x: number_mapping.get(x.lower(), float("inf"))
    )
    return " ".join(sorted_numbers)


input_numbers = input().split()
sorted_numbers_output = sort_numbers(input_numbers)
print(sorted_numbers_output)