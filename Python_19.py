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
    sorted_nums = []
    for num in numbers.split():
        if num in numberals:
            sorted_nums.append(num)
    return " ".join(sorted_nums)