from typing import List

def parse_nested_parens(paren_string: str) -> int:
    if set(paren_string) != set("()"):
        return "Invalid input. Please enter a string containing only parentheses."
    return max([paren_string.count(i * "(") for i in range(len(paren_string) + 1)]) // 2

paren_string = input("Enter a string of nested parentheses: ")
print(parse_nested_parens(paren_string))