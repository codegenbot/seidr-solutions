def sort_numbers(numbers: str) -> str:
    num_map = {
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
    sorted_nums = sorted([num_map[i] for i in numbers.split()])
    return " ".join(
        [str(i) for i in num_map.keys() if num_map[i] == n] for n in sorted_nums
    )