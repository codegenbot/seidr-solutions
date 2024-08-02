numerals = [
    "zero",
    "one",
    "two",
    "three",
    "four",
    "five",
    "six",
    "seven",
    "eight",
    "nine",
]


def sort_numbers(numbers: str) -> str:
    return " ".join(sorted(numbers.split(), key=lambda x: numerals.index(x)))