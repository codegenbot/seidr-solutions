def separate_paren_groups(paren_string):
    groups = paren_string.replace(' ', '').lstrip('(').rstrip(')').split(')(')
    return [f"({group})" for group in groups]

paren_string = "((ab)(cd)(ef))"
result = separate_paren_groups(paren_string)
print(result)