from typing import List


def get_all_prefixes(s: str) -> List[str]:
    return [s[: i + 1] for i in range(len(s))]


def all_prefixes() -> None:
    while True:
        while len(s := input("Please enter a string: ")) == 0 or not s.isalpha():
            pass
        print("\n".join(get_all_prefixes(s)))
        break


if __name__ == "__main__":
    all_prefixes()