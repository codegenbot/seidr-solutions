def separate_paren_groups(paren_string):
    groups = paren_string.split(')(')
    return groups

paren_string = input().replace(" ", "")
result = separate_paren_groups(paren_string)
print(result)