from typing import List


def filter_by_substring() -> None:
    strings_input = input("Please provide a list of strings (comma-separated): ")
    substring_input = input("Please enter the substring: ")

    try:
        strings_list = [s.strip() for s in strings_input.split(",")]
        result = [s for s in strings_list if substring_input in s]
        print(result)
    except Exception as e:
        print(f"Error occurred: {e}")


if __name__ == "__main__":
    filter_by_substring()