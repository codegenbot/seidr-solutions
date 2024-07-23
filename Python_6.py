```
def parse_nested_parens(paren_string: str) -> List[int]:
    result = []
    temp_list = []
    max_nesting_level = 0
    for char in paren_string:
        if char == '(':
            temp_list.append(char)
            if len(temp_list) > max_nesting_level:
                max_nesting_level = len(temp_list)
        elif char == ')':
            temp_list.pop()
            if not temp_list:
                result.append(max_nesting_level)
                max_nesting_level = 0
    return result