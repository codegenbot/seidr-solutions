from typing import List


def filter_by_prefix(strings: List[str], prefix: str) -> None:
    for s in strings:
        if s.startswith(prefix):
            print(s)


while True:
    try:
        num_strings = int(input("Enter number of strings: "))
        break
    except ValueError:
        print("Invalid input. Please enter a valid integer.")

strings = [input() for _ in range(num_strings)]
prefix = input("Enter prefix: ")
filter_by_prefix(strings, prefix)