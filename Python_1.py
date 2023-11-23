def separate_paren_groups(paren_string: str) -> List[str]:
    paren_string = paren_string.replace(" ", "")
    result = []
    count = 0
    start = 0
    for i in range(len(paren_string)):
        if paren_string[i] == '(':
            count += 1
        else:
            count -= 1
        if count == 0:
            result.append(paren_string[start:i+1])
            start = i+1
    return result