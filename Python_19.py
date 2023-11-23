from typing import List


def sort_numbers() -> str:
    number_mapping = {
        0: "zero",
        1: "one",
        2: "two",
        3: "three",
        4: "four",
        5: "five",
        6: "six",
        7: "seven",
        8: "eight",
        9: "nine",
    }

    numbers = input("Enter the numbers to sort: ").split()
    sorted_numbers = sorted(
        numbers, key=lambda x: number_mapping.get(int(x), float("inf"))
    )
    return " ".join(sorted_numbers)


sorted_numbers_output = sort_numbers()
print(sorted_numbers_output)