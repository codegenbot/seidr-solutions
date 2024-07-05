from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    paren_string = paren_string.strip()
    if not paren_string:
        return []
    if not all(char in '()' for char in paren_string):
        return []
    depth_counts = []
    current_depth = 0
    max_depth = 0
    for char in paren_string:
        if char == "(":
            current_depth += 1
            max_depth = max(max_depth, current_depth)
        elif char == ")":
            if current_depth == 0:
                return []
            current_depth -= 1
    if current_depth != 0:
        return []
    return [paren_string.count("(")]

if __name__ == "__main__":
    try:
        paren_string = input().strip()
        result = parse_nested_parens(paren_string)
        if result or paren_string == "":
            print(result)
        else:
            print("Invalid parenthesis string.")
    except Exception as e:
        print(f"Error in input: {e}")