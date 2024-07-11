from typing import List


def filter_by_prefix():
    while True:
        try:
            strings = input("Enter strings (comma-separated): ").split(",")
            prefix = input("Enter prefix: ")

            if len(strings) > 1:
                filtered_strings = [
                    s.strip() for s in strings if s.strip().startswith(prefix)
                ]
            else:
                filtered_strings = [s.strip() for s in strings]

            print(filtered_strings)
            break
        except ValueError as e:
            print(f"Error occurred: {e}")


filter_by_prefix()