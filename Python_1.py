def separate_paren_groups(paren_string: str) -> List[str]:
    paren_string = paren_string.replace(" ", "")
    result = []
    count = 0
    start = 0
    for i, ch in enumerate(paren_string):
        if ch == '(':
            count += 1
            if count == 1:
                start = i
        elif ch == ')':
            count -= 1
            if count == 0:
                result.append(paren_string[start:i+1])
    return result