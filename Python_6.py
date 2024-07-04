from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    paren_string = paren_string.strip()
    if not paren_string:
        return []
    if not all(char in '()' for char in paren_string):
        return []
    depth_list = []
    current_depth = 0
    for char in paren_string:
        if char == "(":
            current_depth += 1
            depth_list.append(current_depth)
        elif char == ")":
            if current_depth == 0:
                return []
            current_depth -= 1
    return depth_list if current_depth == 0 else []

if __name__ == "__main__":
    try:
        paren_string = input().strip()
        result = parse_nested_parens(paren_string)
        if result or paren_string == "":
            print(result)
        else:
            print("Invalid parenthesis string.")
    except:
        print("Error in input.")