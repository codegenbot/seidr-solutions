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
    num_dict = {num: i for i, num in enumerate(numberals)}
    sorted_numbers = sorted(numbers.split(), key=lambda x: num_dict[x])
    return " ".join(sorted_numbers)