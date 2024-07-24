from typing import List


def filter_by_substring(strings: List[str], substring: str) -> List[str]:
    return [s for s in strings if substring in s]


if __name__ == "__main__":
    filename = "input.txt"
    try:
        with open(filename, "r") as f:
            input_data = f.read().splitlines()
            strings = [line.split()[0] for line in input_data]
            substring = input_data[1].strip()
            print(filter_by_substring(strings, substring))
    except FileNotFoundError:
        print(
            "File not found. Please run this script from the same directory as the file."
        )