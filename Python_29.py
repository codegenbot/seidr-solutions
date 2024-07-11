from typing import List


def filter_by_prefix():
    while True:
        try:
            strings = input("Enter strings (comma-separated): ").split(",")
            if not all(s.strip() for s in strings):
                raise ValueError
            prefix = input("Enter prefix: ")

            filtered_strings = [
                s.strip() for s in strings if s.strip().startswith(prefix)
            ]

            print(filtered_strings)
            break

        except ValueError:
            print("Invalid input. Please enter a list of comma-separated strings.")


filter_by_prefix()