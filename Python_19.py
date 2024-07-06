import re


def sort_numbers(numbers: str) -> str:
    numbers = [int(re.search(r"\d+", num).group()) for num in numbers.split()]
    sorted_numbers = sorted(numbers)
    return " ".join([str(num) for num in sorted_numbers])