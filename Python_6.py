from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    return [
        max(paren_string.count("(" * i) for i in range(1, len(paren_string) // 2 + 1))
        for paren_string in paren_string.split()
    ]


if __name__ == "__main__":
    paren_string = input("Enter the string with nested parentheses: ")
    result = parse_nested_parens(paren_string)
    print(result)