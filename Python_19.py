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
        "nine": 9
    }
    nums_to_sort = []
    for num in numbers.split():
        if num in num_dict:
            nums_to_sort.append(num_dict[num])
    sorted_nums = sorted(nums_to_sort)
    return " ".join([str(k) for _, k in [(k, v) for k, v in num_dict.items() if v == i] for i in sorted_nums])