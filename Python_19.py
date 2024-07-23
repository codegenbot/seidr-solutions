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

    def convert_to_int(num_str):
        if num_str.isdigit():
            return int(num_str)
        else:
            return num_dict[num_str]

    nums = [convert_to_int(num) for num in numbers.split()]
    return " ".join(map(str, sorted(nums)))