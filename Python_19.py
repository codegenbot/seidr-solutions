def sort_numbers(numbers: str) -> str:
    num_dict = {
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
    sorted_list = sorted([num_dict[i] for i in numbers.split()])
    return " ".join([k for k, v in num_dict.items() if v in sorted_list])