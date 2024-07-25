from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]


if __name__ == "__main__":
    filename = "input.txt"
    try:
        with open(filename, "r") as f:
            input_data = f.read().splitlines()
            if len(input_data) > 0 and len(input_data[-1]) > 0:
                strings = [s.strip() for s in input_data[:-1]]
                substring = input_data[-1].strip()
                print(filter_by_substring(strings, substring))
            else:
                print(
                    "Invalid input. Please provide at least one string and a valid substring."
                )
                exit()
    except FileNotFoundError:
        print(
            "File not found. Please run this script from the same directory as the file."
        )