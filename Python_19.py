def sort_numbers(numbers):
    numbers = numbers.split()
    if not all(n.isdigit() for n in numbers):
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
    numbers = [int(number_map[num]) for num in numbers]
    sorted_numbers = sorted(numbers)
    return " ".join([str(num) for num in sorted_numbers])