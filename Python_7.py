from typing import list


def filter_by_substring(strings: list, substring: str) -> list:
    return [s for s in strings if substring in s]


def filter_by_substring():
    strings = []
    substring = input("Enter a substring: ")

    while True:
        try:
            num_strings = int(input("Enter the number of strings: "))
            break
        except ValueError:
            print("Invalid input. Please enter a positive integer.")

    for _ in range(num_strings):
        s = input(f"Enter string {_+1} (or leave blank to finish): ")
        if not s:
            break
        strings.append(s)

    return filter_by_substring([s.lower() for s in strings], substring)