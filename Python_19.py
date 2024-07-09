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
    numbers_list.sort(key=lambda x: numberals.index(x))
    return " ".join(numbers_list)