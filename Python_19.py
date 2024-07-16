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
    sorted_numbers = [num_dict[i] for i in numbers.split() if i in num_dict]
    sorted_numbers.sort()
    return " ".join([i for i in num_dict.keys() if num_dict[i] in sorted_numbers])