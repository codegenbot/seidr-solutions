def sort_numbers(numbers: str) -> str:
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
    numbers = numbers.replace(" ", "")  # remove spaces from input string
    sorted_numbers = sorted(number_map[number] for number in numbers)
    return " ".join(str(number) for number in sorted_numbers)