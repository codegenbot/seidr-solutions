from typing import List


def get_all_prefixes(s: str) -> List[str]:
    return [s[: i + 1] for i in range(len(s) + 1)]


def all_prefixes() -> None:
    while True:
        s = input("Please enter a string: ")
        if isinstance(s, str):
            print("\n".join(get_all_prefixes(s)))
            break
        else:
            print("Error: Please provide valid string.")


if __name__ == "__main__":
    all_prefixes()