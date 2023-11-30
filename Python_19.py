from typing import List


def sort_numbers(numbers: str) -> str:
    num_mapping = {
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
    input_numbers = numbers.split()
    sorted_numbers = sorted(input_numbers, key=lambda x: num_mapping[x])
    return " ".join(sorted_numbers)


numbers_input = input().strip()
output = sort_numbers(numbers_input)
print(output)