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
    num_pattern = r"zero|one|two|three|four|five|six|seven|eight|nine"
    nums = [num_dict[i] for i in re.findall(num_pattern, numbers)]
    return " ".join(sorted(map(str, set(nums))))