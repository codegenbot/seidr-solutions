```
def separate_paren_groups(paren_string: str) -> List[str]:
    result = []
    stack = []
    groups = ""
    
    for c in paren_string:
        if c == " ":
            continue
        if c == "(":
            stack.append(c)
            groups += c
        elif c == ")":
            stack.pop()
            if not stack:
                result.append(groups + c)
                groups = ""

    return result