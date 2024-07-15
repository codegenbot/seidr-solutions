from typing import List
def parse_nested_parens(paren_string: str) -> List[int]:
    formatted_string = " ".join([group.lstrip().rstrip() for group in paren_string.split(" ")])
    levels = []
    for group in formatted_string.split(" "):
        curr_level = 0
        max_level = 0
        for char in group:
            if char == "(":
                curr_level += 1
                max_level = max(max_level, curr_level)
            elif char == ")":
                curr_level -= 1
        levels.append(max_level)
    return levels