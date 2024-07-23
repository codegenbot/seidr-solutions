from typing import Optional, list


def longest(strings: list[str]) -> Optional[str]:
    if not strings:
        return None

    def is_printable(s: str) -> bool:
        return all(32 <= ord(c) < 127 for c in s)

    return max((s for s in strings if is_printable(s)), key=len)


if __name__ == "__main__":
    input_list = input("Enter a list of strings separated by space: ")
    strings = [s.strip() for s in input_list.split()]
    result = longest(strings)
    if result is None:
        print("No printable strings found.")
    else:
        print(f"The longest printable string is: {result}")