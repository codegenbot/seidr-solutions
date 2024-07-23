```python
from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    level = 0
    for char in paren_string.replace(" ", ""):
        if char not in ["(", ")"]:
            raise ValueError("Invalid character in input string")
        if char == "(":
            level += 1
            result.append(level)
        elif char == ")":
            while level > 1:
                result.append(level - 1)
                level -= 1
    return [i for i in result]


def main():
    paren_string = input("Enter a string of parentheses: ")
    try:
        print(parse_nested_parens(paren_string))
    except ValueError as e:
        print(f"Error: {e}")


if __name__ == "__main__":
    main()