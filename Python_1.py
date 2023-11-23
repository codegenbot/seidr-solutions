def separate_paren_groups(paren_string):
    groups = paren_string.replace(" ", "").split(')(')
    return groups

result = separate_paren_groups(input().strip('\n'))
print(result)