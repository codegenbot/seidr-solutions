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
    nums = numbers.split()
    sorted_nums = sorted([num_dict[num] for num in nums])
    return " ".join(
        [
            str(num)
            for num in sorted_nums
            if str(num) in [str(num_dict[i]) for i in range(10)]
        ].sort()
    )