from typing import List


def parse_nested_parens() -> List[int]:
    paren_string = input("Enter a string with parentheses: ")
    return [
        max([paren_string.count("(" * i) for i in range(1, len(paren_string) // 2 + 1)])
        // 2
    ]