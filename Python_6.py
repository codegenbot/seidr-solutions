```
from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    stack = []
    for char in paren_string:
        if char == '(':
            stack.append(char)
        elif char == ')':
            result.append(len(stack))
            while stack and stack.pop() != '(':
                pass
    while stack: 
        result.append(-len(stack))
        stack.pop()
    return result

def main():
    user_input = input("Enter a string of parentheses: ")
    print(parse_nested_parens(user_input))

if __name__ == "__main__":
    main()