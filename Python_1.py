def separate_paren_groups(paren_string):
    groups = []
    count = 0
    start = 0
    for i, char in enumerate(paren_string):
        if char == '(':
            count += 1
        else:
            count -= 1
        if count == 0:
            groups.append(paren_string[start:i+1])
            start = i + 1
    return groups