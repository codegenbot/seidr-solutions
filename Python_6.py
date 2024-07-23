from typing import List


def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    level_stack = []

    for char in paren_string:
        if char == "(":
            level_stack.append(len(result))
        elif char == ")":
            if not level_stack:
                raise ValueError("Invalid parentheses")
            top_level = level_stack.pop()
            while top_level > len(result):
                result.append(top_level - 1)
        else:
            if level_stack:
                result.append(len(result) + 1)

    return [i-1 for i in result]


def main():
    paren_string = input("Enter a string of parentheses: ")
    try:
        print(parse_nested_parens(paren_string))
    except ValueError as e:
        print(f"Error: {e}")


if __name__ == "__main__":
    main()