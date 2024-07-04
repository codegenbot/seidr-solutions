from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    if not all(char in '()' for char in paren_string):
        return []

    depth_list = []
    current_depth = 0
    stack = 0
    
    for char in paren_string:
        if char == "(":
            current_depth += 1
            stack += 1
        elif char == ")":
            if stack == 0:  # More closing than opening
                return []
            depth_list.append(current_depth)
            current_depth -= 1
            stack -= 1
    
    if stack != 0:  # Unmatched opening parentheses
        return []

    return depth_list

if __name__ == "__main__":
    paren_string = input().strip()
    result = parse_nested_parens(paren_string)
    print(result)