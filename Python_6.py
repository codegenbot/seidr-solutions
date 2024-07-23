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
            result.append(level)

    return result


def main():
    paren_string = input("Enter a string of parentheses: ")
    try:
        print(parse_nested_parens(paren_string))
    except ValueError as e:
        print(f"Error: {e}")


if __name__ == "__main__":
    main()