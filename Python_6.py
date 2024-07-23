from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    current_level = 0

    for char in paren_string.replace(" ", ""):
        if char not in ["(", ")"]:
            raise ValueError("Invalid character in input string")
        if char == "(":
            current_level += 1
        elif char == ")":
            current_level -= 1
            if current_level == 0:
                result.append(0)

    return [i for i in result]


def main():
    paren_string = input("Enter a string of parentheses: ")
    try:
        print(parse_nested_parens(paren_string))
    except ValueError as e:
        print(f"Error: {e}")


if __name__ == "__main__":
    main()