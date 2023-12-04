[PYTHON]
def sort_numbers(numbers):
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
        "nine": 9
    }
    sorted_numbers = []
    for number in numbers.split():
        sorted_numbers.append(number_map[number])
    return " ".join(str(x) for x in sorted_numbers)
[/PYTHON]
[TESTS]
# Test case 1:
assert sort_numbers("three one five") == "one three five"
# Test case 2:
assert sort_numbers("five three one") == "one three five"
# Test case 3:
assert sort_numbers("seven two one") == "one seven two"
# Test case 4:
assert sort_numbers("eight four one") == "one four eight"
# Test case 5:
assert sort_numbers("nine five one") == "one five nine"
[/TESTS]
