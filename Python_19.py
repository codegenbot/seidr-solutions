from typing import List


def sort_numbers() -> str:
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

    numbers = input().split()
    sorted_numbers = sorted(
        numbers, key=lambda x: number_mapping.get(x.lower(), float("inf"))
    )
    return " ".join(sorted_numbers)


sorted_numbers_output = sort_numbers()
print(sorted_numbers_output)