import re


def sort_numbers(numbers: str) -> str:
    numbers = re.findall(r"\d+", numbers)
    sorted_numbers = sorted([int(number) for number in numbers])
    return " ".join(str(number) for number in sorted_numbers)