import sys
from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> None:
    filtered_strings = [s for s in strings if s.startswith(prefix)]
    print(*filtered_strings, sep="\n")
    if not filtered_strings:
        print("No strings match the given prefix.")


stored_strings = []


def main():
    while True:
        try:
            while True:
                num_strings = input("Enter number of strings (integer): ")
                if num_strings.isdigit() and int(num_strings) > 0:
                    break
                else:
                    print("Please enter a positive integer.")
            stored_strings = [input() for _ in range(int(num_strings))]

            while True:
                prefix = input("Enter prefix (string): ")
                if len(prefix.strip()) > 0:
                    filter_by_prefix([str(x) for x in stored_strings], prefix)
                    break
                else:
                    print("Please enter a valid prefix.")
        except Exception as e:
            print(f"An error occurred: {e}")
            answer = input("Do you want to continue (yes/no)? ")
            if answer.lower() != "yes":
                sys.exit()


if __name__ == "__main__":
    main()