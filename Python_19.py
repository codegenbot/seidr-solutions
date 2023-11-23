from typing import List


def sort_numbers(numbers: List[str]) -> str:
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

    numbers_list = numbers.split(",")
    sorted_numbers = sorted(
        numbers_list, key=lambda x: number_mapping.get(x.lower(), float("inf"))
    )
    return " ".join(sorted_numbers)


numbers = input().strip()
sorted_numbers_output = sort_numbers(numbers)
print(sorted_numbers_output)