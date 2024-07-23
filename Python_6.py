from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    level = 0
    for char in paren_string:
        if char == "(":
            level += 1
            result.append(level)
        elif char == ")":
            level -= 1

    return [i - 1 for i in result]


def main():
    paren_string = input("Enter a string of parentheses: ")
    print(parse_nested_parens(paren_string))


if __name__ == "__main__":
    main()