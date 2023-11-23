def separate_paren_groups(paren_string):
    groups = paren_string.replace(")(", ") (").split()
    groups = [group.strip() for group in groups]
    return groups