```
def parse_nested_parens(paren_string: str) -> list:
    result = []
    level = 0
    sub_list = []
    for char in paren_string:
        if char == '(':
            level += 1
            if level > 1:
                sub_list.append(0)
            else:
                sub_list = [0]
        elif char == ')':
            level -= 1
        sub_list.append(level)
        if level == 0 and sub_list[-1] == 0:
            result.append(sub_list)
            sub_list = []
    return result