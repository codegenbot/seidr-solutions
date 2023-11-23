def separate_paren_groups(paren_string):
    groups = paren_string.replace(" ", "").split(')(')
    return groups

paren_string = input().strip()[1:-1]
result = separate_paren_groups(paren_string)
print(result[1:-1])