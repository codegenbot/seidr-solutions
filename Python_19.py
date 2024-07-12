def sort_numbers(numbers: str) -> str:
    numberals = [
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
    numbers_list = numbers.split()
    sorted_numbers_list = sorted(numbers_list, key=lambda x: numberals.index(x))
    return " ".join(sorted_numbers_list)