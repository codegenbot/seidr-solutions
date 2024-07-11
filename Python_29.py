import sys
from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> None:
    filtered_strings = [s for s in strings if s.startswith(prefix)]
    print(*filtered_strings, sep="\n")
    if not filtered_strings:
        print("No strings match the given prefix.")


def main():
    while True:
        try:
            num_strings = int(input("Enter number of strings (integer): "))
            if num_strings <= 0:
                print("Please enter a positive integer.")
                continue
            break
        except ValueError:
            print("Invalid input! Please enter an integer.")
            continue

    strings = [input() for _ in range(num_strings)]

    while True:
        try:
            prefix = input("Enter prefix (string): ")
            if not prefix.strip():  # Check for empty input
                print("Please enter a valid prefix.")
                continue
            filter_by_prefix([str(x) for x in strings], prefix)
            break
        except Exception as e:
            print(f"An error occurred: {e}")
            continue


if __name__ == "__main__":
    main()