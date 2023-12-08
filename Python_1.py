def separate_paren_groups(paren_string: str) -> list[str]:
    groups = []
    i = 0
    while i < len(paren_string):
        if paren_string[i] == '(':
            j = i + 1
            count = 1
            while count > 0 and j < len(paren_string):
                if paren_string[j] == '(':
                    count += 1
                elif paren_string[j] == ')':
                    count -= 1
                j += 1
            groups.append(paren_string[i:j])
            i = j
        else:
            i += 1
    return groups