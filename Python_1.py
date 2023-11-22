def separate_paren_groups(paren_string: str) -> List[str]:
    open_count = close_count = 0
    result = []
    curr_string = ""

    for char in paren_string:
        if char == '(':
            open_count += 1
        elif char == ')':
            close_count += 1

        curr_string += char
        
        if open_count == close_count:
            result.append(curr_string)
            curr_string = ""
            open_count = close_count = 0

    return result