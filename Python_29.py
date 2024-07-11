from typing import List


def filter_by_prefix():
    while True:
        try:
            strings = input("Enter strings (comma-separated): ").split(",")
            prefix = input("Enter prefix: ")

            if all(s.strip().startswith(prefix) for s in strings):
                filtered_strings = [s.strip() for s in strings]
                print(filtered_strings)
                break
            else:
                print(
                    "Not all strings start with the given prefix. Please enter valid input."
                )
        except ValueError as e:
            print(f"Error occurred: {e}")


filter_by_prefix()