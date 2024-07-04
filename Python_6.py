from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    depth_list = []
    current_depth = 0
    for char in paren_string:
        if char == "(":
            current_depth += 1
        elif char == ")":
            depth_list.append(current_depth)
            current_depth -= 1
    return depth_list

def is_valid_paren_string(paren_string: str) -> bool:
    balance = 0
    for char in paren_string:
        if char == "(":
            balance += 1
        elif char == ")":
            balance -= 1
        if balance < 0:
            return False
    return balance == 0

if __name__ == "__main__":
    paren_string = input().strip()
    if set(paren_string) <= {"(", ")"} and is_valid_paren_string(paren_string):
        result = parse_nested_parens(paren_string)
        print(result)
    else:
        print("Invalid input. Please enter a valid parentheses string.")