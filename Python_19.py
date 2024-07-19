def sort_numbers(numbers: str) -> str:
    nums = {
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
    sorted_nums = sorted([nums[i] for i in numbers.split()], key=int)
    return " ".join([k for k, v in zip(nums.keys(), sorted_nums)])