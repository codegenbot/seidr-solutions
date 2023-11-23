def separate_paren_groups(paren_string):
    groups = paren_string.split(')(')
    return groups

paren_string = "((ab)(cd)(ef))"
result = separate_paren_groups(paren_string)
print(result)