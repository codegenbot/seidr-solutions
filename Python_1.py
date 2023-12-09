
def separate_paren_groups(paren_string):
    groups = []
    current_group = ""
    num_opening_parens = 0
    for char in paren_string:
        if char == "(":
            num_opening_parens += 1
            current_group += char
        elif char == ")":
            num_opening_parens -= 1
            if num_opening_parens == 0:
                groups.append(current_group)
                current_group = ""
    return groups