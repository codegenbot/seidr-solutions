def separate_paren_groups(paren_string):
    groups = paren_string.replace(" ", "").split(')(')
    return groups

paren_string = "(a) (b)(c)"
result = separate_paren_groups(paren_string)
print(result)