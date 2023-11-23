from typing import List


def sort_numbers(numbers: str) -> str:
    number_mapping = {
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

    valid_words = set(number_mapping.keys())
    words_list = numbers.split()
    if not set(words_list).issubset(valid_words):
        return "Invalid input"

    numbers_list = [number_mapping[word] for word in words_list]
    sorted_numbers = sorted(numbers_list)

    sorted_words = [list(number_mapping.keys())[list(number_mapping.values()).index(num)] for num in sorted_numbers]

    return " ".join(sorted_words)


numbers_input = input().strip().lower()
sorted_numbers_output = sort_numbers(numbers_input)
print(sorted_numbers_output)