
import re
def sort_numbers(numbers):
    if not numbers.isdigit():
        return "Invalid input"
     number_map = {
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
    numbers = [int(number_map[num]) for num in re.findall(r"\d+", numbers)]
    sorted_numbers = sorted(numbers)
    return " ".join([str(num) for num in sorted_numbers])
