from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    depth_list = []
    current_depth = 0
    for char in paren_string:
        if char == "(":
            current_depth += 1
        elif char == ")":
            if current_depth == 0:
                return []
            depth_list.append(current_depth)
            current_depth -= 1
    return depth_list if current_depth == 0 else []

if __name__ == "__main__":
    import sys
    input = sys.stdin.read
    paren_string = input().strip()
    result = parse_nested_parens(paren_string)
    print(result)