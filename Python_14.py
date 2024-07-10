from typing import List


def get_all_prefixes(s: str) -> List[str]:
    return [s[: i + 1] for i in range(len(s))]


def all_prefixes() -> None:
    while True:
        s = input("Please enter a string: ")
        if not s.strip():
            print("Error: Please provide a non-empty string.")
        elif not s.isalpha():
            print("Error: Input should be alphanumeric characters only.")
        else:
            break
    print("\n".join(get_all_prefixes(s)))