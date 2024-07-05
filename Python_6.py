from typing import List

def parse_nested_parens(paren_string: str) -> List[int]:
    paren_string = paren_string.strip()

    if not paren_string:
        return []

    if not all(char in "()" for char in paren_string):
        return ["Invalid parenthesis string."]

    depth_list = []
    current_depth = 0
    for char in paren_string:
        if char == "(":
            current_depth += 1
            depth_list.append(current_depth)
        elif char == ")":
            if current_depth == 0:
                return ["Invalid parenthesis string."]
            current_depth -= 1

    return depth_list if current_depth == 0 else ["Invalid parenthesis string."]

if __name__ == "__main__":
    try:
        paren_string = input().strip()
        result = parse_nested_parens(paren_string)
        print(result)
    except:
        print("Error in input.")