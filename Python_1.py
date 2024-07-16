from typing import List

def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    current_group = ""
    current_index = 1

    if not paren_string or paren_string[0] != "(" or paren_string[-1] != ")":
        return ["Input string must start and end with parentheses."]

    while current_index < len(paren_string) - 1:
        char = paren_string[current_index]
        current_group += char

        if char == "(":
            open_brackets_count = 1
            current_index += 1
            while open_brackets_count != 0:
                char = paren_string[current_index]
                current_group += char
                if char == "(":
                    open_brackets_count += 1
                elif char == ")":
                    open_brackets_count -= 1
                current_index += 1
        
        elif char == ")":
            result.append(current_group)
            current_group = ""
            current_index += 1

    if current_group:
        result.append(current_group)

    return result