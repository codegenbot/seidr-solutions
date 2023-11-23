def separate_paren_groups(paren_string):
    if paren_string.startswith('(') and paren_string.endswith(')'):
        groups = paren_string[1:-1].split(')(')
        return groups
    return []

paren_string = input().replace(" ", "")
result = separate_paren_groups(paren_string)
print(result)