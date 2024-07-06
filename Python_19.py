def sort_numbers(numbers: str) -> str:
    num_dict = {
        "zero": 0, "one": 1, "two": 2, "three": 3, "four": 4,
        "five": 5, "six": 6, "seven": 7, "eight": 8, "nine": 9
    }
    nums = list(map(lambda x: num_dict[x] if x in num_dict else int(x) if x.isdigit() else x, numbers.replace("-", " ").replace("'", " ").split()))
    return " ".join(sorted(set(map(str, nums))))