parens = input().strip()
def separate_paren_groups(parens):
    groups = []
    count = 0
    current_group = ""
    for char in parens:
        current_group += char
        if char == '(':
            count += 1
        elif char == ')':
            count -= 1
        if count == 0:
            groups.append(current_group)
            current_group = ""
    return groups

result = separate_paren_groups(parens)